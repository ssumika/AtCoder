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
#include<bitset>

using namespace std;
using ll=long long;

#define mod 998244353

using Graph=vector<vector<int>>;
Graph G;
int x,y;
vector<int> ans;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(int from,int cur){
    ans.push_back(cur);
    if(cur==y){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]+1<<" ";
        }
        return;
    }
    for(auto next_v:G[cur]){
        if(next_v != from) dfs(cur,next_v);
    }
    ans.pop_back();
}

int main() {
    int n;
    cin>>n>>x>>y;
    x--;
    y--;
    G.resize(n);
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(-1,x);
    cout<<endl;
}