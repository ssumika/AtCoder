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

#define mod 998244353
#define ll long long

using Graph=vector<vector<int>>;
vector<bool> seen;
vector<ll> I;
ll cnt=0;

//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
    I.push_back(v);
}

void dfs_2(const Graph &G,int v){
    seen[v]=true;
    cnt++;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        dfs_2(G,next_v);
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    Graph G(n);
    Graph rG(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        G[a-1].push_back(b-1);
        rG[b-1].push_back(a-1);
    }
    seen.assign(n,false);

    for(int i=0; i<n; i++){
        if(seen[i]==false) dfs(G,i);
    }
    
    reverse(I.begin(),I.end());
    ll ans=0;
    seen.assign(n,false);
    for(int i :I){
        if(seen[i]==false){
            cnt=0;
            dfs_2(rG,i);
            ans+=cnt*(cnt-1)/2;
        }
    }
    cout<<ans<<endl;


}
