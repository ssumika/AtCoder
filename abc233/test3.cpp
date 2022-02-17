#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

#define ll long long

using namespace std;

vector<bool> seen;

ll n,x;
ll ans=0;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const vector<vector<ll>> &G,ll v,ll c){
    if(v==n){
        if(c==x){
            ans++;
        }
        return;
    }
    for(ll b:G[v]){
        if(c>x/b)continue;
        dfs(G,v+1,c*b);
    }
}
/*
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
*/

int main(){
    cin>>n>>x;
    vector<vector<ll>> a(n);
    for(int i=0; i<n; i++){
        int l;
        cin>>l;
        for(int j=0; j<l; j++){
            ll num;
            cin>>num;
            a[i].push_back(num);
        }
    }
    dfs(a,0,1);
    cout<<ans<<endl;
}
