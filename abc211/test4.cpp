#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<queue>

using namespace std;

using Graph=vector<vector<int>>;

long long mod=1000000007;

//returnはvector<int>型
auto bfs(const Graph &G,int s,int n){
    queue<int> que;
    vector<int> dist(n,-1);
    vector<int> cnt(n);
    que.push(s);
    dist[s]=0;
    cnt[0]=1;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto& nv:G[v]){
            if(dist[nv]!=-1 && dist[nv]==dist[v]+1){
                cnt[nv]+=cnt[v]%mod;
                cnt[nv]%=mod;
            }else if(dist[nv]==-1){
                dist[nv]=dist[v]+1;
                cnt[nv]=cnt[v];
                que.push(nv);
            }
            
            }
        }
    return cnt;
}



int main(){
    int n,m;
    cin>>n>>m;
    Graph G(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<int> cnt;
    cnt=bfs(G,0,n); 
    cout<<cnt[n-1]<<endl;
}
