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
    UnionFind U;
    U.init(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        U.unite(a,b);
    }
    int r=count(U.par.begin(),U.par.end(),-1);
    cout<<r-1<<endl;
}