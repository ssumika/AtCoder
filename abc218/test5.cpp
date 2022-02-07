#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

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

int main(){
    int n,m;
    cin>>n>>m;
    Graph G;
    vector<int> c(m);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b>>c[i];
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    long long ans=0;
    

}
