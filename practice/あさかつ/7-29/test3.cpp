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

ll x;
map<ll,ll> memo;

long long f(ll x){
    if(memo.count(x)){
        return memo[x];
    }else if(x<=4){
        return x;
    }else{
        return memo[x]=f(x/2)%mod*f((x+1)/2)%mod;
    }
}
 
int main(){    
    cin>>x;
    ll ans;
    ans=f(x);
    cout<<ans<<endl;
}