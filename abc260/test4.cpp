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


int main(){
  int n,k;
  cin >> n >> k;
  vector<int> under(n+1,-1);
  vector<int> pile(n+1,0);
  set<int> st;
  vector<int> res(n+1,-1);
  for(int i=1;i<=n;i++){
    int p;
    cin >> p;
    auto it=st.upper_bound(p);
    if(it==st.end()){
      pile[p]=1;
      st.insert(p);
    }
    else{
      under[p]=(*it);
      pile[p]=pile[(*it)]+1;
      st.erase(it);
      st.insert(p);
    }
    
    if(pile[p]==k){
      st.erase(p);
      int x=p;
      for(int j=0;j<k;j++){
        res[x]=i;
        x=under[x];
      }
    }
  }
  for(int i=1;i<=n;i++){cout << res[i] << "\n";}
  return 0;
}