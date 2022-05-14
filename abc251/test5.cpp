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

#define mod 998244353
#define ll long long
#define inf 1e18;

int main(){
   int n;
   cin>>n;
   vector<ll> a(n+1);
   vector<vector<ll>> dp(n+1,vector<ll>(2));
 
   for(int i=1; i<=n; i++){
       cin>>a[i];
   }

    ll ans=inf;
   for(int t=0; t<=1; t++){
       if(t==0){
        dp[1][0]=0;
        dp[1][1]=inf;
       }else{
           dp[1][0]=inf;
           dp[1][1]=a[1];
       }
       for(int i=1; i<n; i++){
           dp[i+1][0]=dp[i][1];
           dp[i+1][1]=min(dp[i][1],dp[i][0])+a[i+1];
       }

       if(t==0){
           ans=min(ans,dp[n][1]);
       }else{
           ans=min(ans,min(dp[n][0],dp[n][1]));
       }
   }
   cout<<ans<<endl;

}
