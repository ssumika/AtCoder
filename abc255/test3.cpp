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

void swap(ll *x,ll *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

int main(){
    ll x,a,d,n;
    cin>>x>>a>>d>>n;

    ll max_v=a+d*(n-1);
    ll min_v=a;

    if(max_v<min_v){
        swap(max_v,min_v);
    }
    ll ans=0;
    
    if(x>=max_v || x<=min_v){
        ans=min(abs(x-max_v),abs(x-min_v));
    }else{
        ll k=(x-a)/d;
        ans=min(abs(x-(a+d*k)),min(abs(x-(a+d*(k+1))),abs(x-(a+d*(k-1)))));
    }
    cout<<ans<<endl;
}
