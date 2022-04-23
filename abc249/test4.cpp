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

int main(){
  int n;
  cin>>n;
  vector<int> a(200001);
  for(int i=0; i<n; i++){
      int s;
      cin>>s;
      a[s]++;
  }

  ll ans=0;
  for(int i=1; i<a.size(); i++){
      for(int j=1; i*j<a.size(); j++){
          ans+=(ll)a[i]*a[j]*a[i*j];
      }
  }
  cout<<ans<<endl;
}
