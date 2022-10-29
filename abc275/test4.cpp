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
static map<ll,ll> memo;

ll f(ll n){
    if(n==0){
        return 1;
    }if(memo.count(n)){
        return memo[n];
    }else{
        return memo[n]=f(floor(n/2))+f(floor(n/3));
    }
}

int main(){
    ll n;
    cin>>n;
    ll ans=f(n);
    cout<<ans<<endl;
}
