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

static map<int,bool> seen;
int ans=1;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(map<int,vector<int>> &G,int v){
    seen[v]=true;
    for(int next_v:G[v]){
        ans=max(ans,next_v);
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
}

int main() {
	int n;
	cin>>n;
	map<int,vector<int>> G;
	for (int i=0; i<n; i++) {
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
        seen[a]=false;
        seen[b]=false;
	}

    dfs(G,1);
    cout<<ans<<endl;
	
}