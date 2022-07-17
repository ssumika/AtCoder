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
    ll n,x,y;
    cin>>n>>x>>y;

    ll sum=0;
    for(ll k=2; k<=n; k++){
        for(ll i=k-1; i>=1; i--){
            ll j=k-i;
            sum+=pow(x,i)*pow(y,j);
        }
    }
    cout<<sum<<endl;
    
}