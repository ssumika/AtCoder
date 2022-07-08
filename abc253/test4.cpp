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

ll get(ll n) {
    return (n+1)*n/2;
}
ll gcd(ll x,ll y){
    ll tmp;
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
ll lca(ll a, ll b) {
    return a*b/gcd(a, b);
}

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll s = lca(a, b);
    ll ans = get(n)-get(n/a)*a-get(n/b)*b+get(n/s)*s;
    cout << ans <<endl;
}
