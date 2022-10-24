#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>

using namespace std;
using ll=long long;

#define mod 998244353

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
    vector<int> a(n+1);
    vector<vector<int>> G(2*n+2);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        G[a[i]].push_back(2*i);
        G[a[i]].push_back(2*i+1);
        //cout<<a[i]<<" "<<2*i<<" "<<2*i+1<<endl;
    }
    vector<int> ans(2*n+2);
    ans=bfs(G,1,2*n+2);

    for(int i=1; i<=2*n+1; i++){
        cout<<ans[i]<<endl;
    }
}
