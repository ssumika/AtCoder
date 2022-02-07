#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;

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
    int n,q;
    cin>>n>>q;
    Graph G(n);

    for(int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    vector<int> dist(n);
    dist=bfs(G,0,n);


    vector<string> ans(q);
    for(int i=0; i<q; i++){
        int c,d;
        cin>>c>>d;
        if(dist[c-1]%2!=dist[d-1]%2){
            ans[i]="Road";
        }else{
            ans[i]="Town";
        }
    }

    for(int i=0; i<q; i++){
        cout<<ans[i]<<endl;
    }
}
