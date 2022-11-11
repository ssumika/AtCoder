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
  int n;
  cin>>n;
  vector<int> p(n);
  for(int i=0; i<n; i++){
    cin>>p[i];
  }
  prev_permutation(p.begin(), p.end());
  for(int i=0; i<n; i++){
    cout<<p[i]<<" ";
  }
  cout<<endl;
}
