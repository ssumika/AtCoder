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
 
#define mod 1000000007
 
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll> a(n+1,0);
    vector<ll> sum(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    ll ans=0;
    for(int i=0; i<n-k+1; i++){
        ans+=sum[i+k]-sum[i];
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}