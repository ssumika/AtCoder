#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>

using namespace std;
using ll=long long;
using Graph=vector<vector<int>>;
//returnはvector<int>型
auto bfs(const Graph &G,int s,int n){
    queue<int> que;
    vector<int> dist(n,-1);
    que.push(s);
    dist[s]=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto& nv:G[v]){
            if(dist[nv]!=-1) continue;
            que.push(nv);
            dist[nv]=dist[v]+1;
            }
        }
    return dist;
}



int main(){
    int n;
    cin>>n;
    Graph G(n);
    for(int i=1; i<=n-1; i++){
        int a,b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    //cout<<"!"<<endl;
    vector<int> dis(n);
    dis=bfs(G,0,n);
    int max_index=0;
    int max_dis=0;
    for(int i=0; i<n; i++){
        if(dis[i]>max_dis){
            max_dis=dis[i];
            max_index=i;
        }
    }

    dis=bfs(G,max_index,n);
    max_dis=0;
    for(int i=0; i<n; i++){
        if(dis[i]>max_dis){
            max_dis=dis[i];
        }
    }
    cout<<max_dis+1<<endl;
}
