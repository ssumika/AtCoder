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

long long gcd(long long x,long long y){
    long long tmp;
    if(x<y){
        tmp=x;
        x=y;
        y=tmp;
    }
    while(y>0){
        tmp=y;
        y=x%y;
        x=tmp;
    }
    return x;
}


int main(){
  int n;
  cin>>n;
  vector<ll> a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  ll g=a[0];
  for(int i=0; i<n; i++){
    g=gcd(g,a[i]);
  }

  ll ans=0;
  for(int i=0; i<n; i++){
    a[i]/=g;
    while(a[i]%2==0){
        a[i]/=2;
        ans++;
    }
    while(a[i]%3==0){
        a[i]/=3;
        ans++;
    }
    if(a[i]!=1){
        cout<<"-1"<<endl;
        return 0;
    }
  }
  cout<<ans<<endl;
  
}
