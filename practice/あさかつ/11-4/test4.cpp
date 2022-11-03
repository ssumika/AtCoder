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
  string x;
  cin >> x;
  int s=0,c=0;
  for(auto &nx : x){s+=(nx-'0');}
  string res;
  for(int i=x.size()-1;;i--){
    c+=s;
    res.push_back('0'+(c%10));
    c/=10;
    if(i>=0){s-=(x[i]-'0');}
    if(i<=0 && c==0){break;}
  }
  reverse(res.begin(),res.end());
  cout << res << '\n';
  return 0;
}