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

#define mod 1000000007
#define ll long long

int main(){
    ll k;
    cin>>k;
    if(k%9!=0){
       cout<<"0"<<endl;
       return 0;
    }else{
        vector<ll> dp(k+1);
        dp[0]=1;
        for(ll i=1; i<=k; i++){
            ll n=min(k,(ll)9);
            for(ll j=1; j<=n; j++){
                if(i-j>=0){
                    dp[i]+=dp[i-j]%mod;
                }
                //cout<<dp[i]<<endl;
            }
        }
        cout<<dp[k]%mod<<endl;
    }
}
