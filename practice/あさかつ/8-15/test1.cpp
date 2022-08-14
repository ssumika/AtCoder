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
    ll a,b,k;
    cin>>a>>b>>k;
    ll ans=0;
    ll s=a;
    while(s<b){
        s*=k;
        ans++;
    }
    cout<<ans<<endl;
}