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
    int n,m;
    cin>>n>>m;
    vector<ll> x(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    vector<ll> c(m);
    vector<ll> y(m);
    vector<ll> y_index(n+1,-1);
    for(int i=0; i<m; i++){
        cin>>c[i]>>y[i];
        y_index[c[i]]=y[i];
    }

    vector<vector<ll>> dp(n+1,vector<ll>(n+1));
    dp[0][0]=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            dp[i][0]=max(dp[i][0],dp[i-1][j]);
        }
        for(int j=1; j<=i; j++){
            dp[i][j]=dp[i-1][j-1]+x[i-1];
            if(y_index[j]!=-1) dp[i][j]+=y_index[j];
        }
    }
    ll ans=0;
    for(int i=0; i<=n; i++){
        ans=max(dp[n][i],ans);
    }
    cout<<ans<<endl;
}
