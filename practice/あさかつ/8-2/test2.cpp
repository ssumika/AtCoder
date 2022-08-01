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
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    ll ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        sum%=mod;
    }

    for(int i=0; i<n; i++){
        sum-=a[i];
        if(sum<0){
            sum+=mod;
        }
        ans+=a[i]*sum;
        ans%=mod;
        //cout<<sum-a[i]<<endl;
    }
    cout<<ans<<endl;
}