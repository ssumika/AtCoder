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
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.rbegin(),p.rend());
    ll ans=0;
    for(int i=0; i<n; i++){
        if(w<=0){
            break;
        }
        if(w>=p[i].second){
            ans+=p[i].first*p[i].second;
            w-=p[i].second;
        }else{
            ans+=p[i].first*w;
            w=0;
        }
        
    }
    cout<<ans<<endl;
}
