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

long long pow(long long x,long long n){
    long long ans=1;
    while(n>0){
        if(n%2==1){
            ans*=x;
            ans%=mod;
        }
        n/=2;
        x*=x;
        x%=mod;
    }
    return ans;
}
 
int main(){
    ll n;
    cin>>n;

    unordered_set<ll> nums;
    for(ll a=2; a*a<=n; a++){
        ll num=a*a;
        while(num<=n){
            nums.insert(num);
            num*=a;
        }
    }
    cout<<n-nums.size()<<endl;
}