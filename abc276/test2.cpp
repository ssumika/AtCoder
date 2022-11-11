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


int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> G(n);
  for(int i=0; i<m; i++){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  for(int i=0; i<n; i++){
    cout<<G[i].size()<<" ";
    sort(G[i].begin(),G[i].end());
    for(int j=0; j<G[i].size(); j++){
        cout<<G[i][j]+1<<" ";
    }
    cout<<endl;
  }
}
