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


int main(){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> ab(n);
    for(int i=0; i<n; i++){
        cin>>ab[i].first>>ab[i].second;
    }
    sort(ab.begin(),ab.end());

    ll ans;
    ll index=0;
    k-=1;
    ll i=0;
    while(index<=k){
        ans=ab[i].first;
        index+=ab[i].second;
        i++;
    }
    cout<<ans<<endl;
    
}