#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<stack>

using namespace std;

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

int main() {
   int h,w;
   cin>>h>>w;
   int Q;
   cin>>Q;
   UnionFind UF;
   UF.init(h*w);
   vector<vector<bool>> p(h,vector<bool>(w,false));
   vector<string> ans;
   for(int i=0; i<Q; i++){
       int q;
       cin>>q;
       if(q==1){
           int r,c;
           cin>>r>>c;
           r--;
           c--;
           p[r][c]=true;
           if(r>0 && p[r-1][c]==true){
               UF.unite(r*w+c,(r-1)*w+c);
           }
           if(r+1<h && p[r+1][c]==true){
               UF.unite(r*w+c,(r+1)*w+c);
           }
           if(c>0 && p[r][c-1]==true){
              UF.unite(r*w+c,r*w+c-1);
           }
           if(c+1<w && p[r][c+1]==true){
               UF.unite(r*w+c,r*w+c+1);
           }
       }else{
           int ra,ca,rb,cb;
           cin>>ra>>ca>>rb>>cb;
           ra--;
           ca--;
           rb--;
           cb--;
           if(p[ra][ca]!=true || p[rb][cb]!=true){
               ans.push_back("No");
           }else{
               if(UF.same(ra*w+ca,rb*w+cb)){
                   ans.push_back("Yes");
               }else{
                   ans.push_back("No");
               }
           }
       }
   }
   for(int i=0; i<ans.size(); i++){
       cout<<ans[i]<<endl;
   }
}