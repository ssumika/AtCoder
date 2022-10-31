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
#include<bitset>

using namespace std;
using ll=long long;

#define mod 998244353

ll n,k;
vector<ll> a;

bool f(ll c){
    ll sum=0;
    for(int i=0; i<n; i++){
        sum+=min(a[i],c);
    }
    return sum<=k;
}

int main() {
    cin>>n>>k;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll r=1e12+1;
    ll l=0;
    while(r-l>1){
        ll mid=(l+r)/2;
        if(f(mid)){
            l=mid;
        }else{
            r=mid;
        }
    }
    for(int i=0; i<n; i++){
        ll d=min(a[i],l);
        a[i]-=d;
        k-=d;
    }

    for(int i=0; k>0; i++){
        if(a[i]){
            a[i]--;
            k--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}