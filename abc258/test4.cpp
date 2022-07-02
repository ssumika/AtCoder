#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<climits>

using namespace std;
typedef long long ll;

#define mod 998244353

int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    vector<ll> b(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }


    ll ans=LLONG_MAX;
    ll n_sum=0;
    for(int i=0; i<n; i++){
        if(i==x){
            break;
        }
        n_sum+=a[i]+b[i];
        ans=min(ans,n_sum+b[i]*(x-i-1));
    }
    cout<<ans<<endl;
}
