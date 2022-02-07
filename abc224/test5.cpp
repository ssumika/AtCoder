#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<queue>

using namespace std;

using Graph=vector<vector<int>>;
vector<bool> seen;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
}

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
    int h,w,n;
    cin>>h>>w>>n;
    vector<vector<int>> p(h,vector<int>(w,0));
    for(int i=0; i<n; i++){
        int r,c,a;
        cin>>r>>c>>a;
        p[r-1][c-1]=a;
    }



    

    return 0;
}
