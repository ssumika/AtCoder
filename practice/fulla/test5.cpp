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

class UnionFind {
    public:
        vector<int> par;
        void init(int sz) {
            par.resize(sz, -1);
        }
        int root(int pos) {
            if (par[pos] == -1) return pos;
            par[pos] = root(par[pos]);
            return par[pos];
        }
        void unite(int u, int v) {
            u = root(u); v = root(v);
            if (u == v) return;
            par[u] = v;
        }
        bool same(int u, int v) {
            if (root(u) == root(v)) return true;
            return false;
        }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> G(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
    }

    UnionFind U;
    U.init(n+1);
    vector<ll>res={0}; //頂点 N まで消した時の答えは必ず 0
    ll ans = 0; // 今の連結成分の数
   
    for(ll i=n;i>=2;i--){
        ans++; //頂点 i を追加
        for(auto j:G[i]){
            if(!U.same(i,j)){
                U.unite(i,j);
                ans--; //非連結の頂点同士を繋げたとき、連結成分の数は 1 減る
            }
        }
        res.push_back(ans);
    }
    reverse(res.begin(),res.end());
    for(auto x:res)cout<<x<<endl;
    return 0;
}
