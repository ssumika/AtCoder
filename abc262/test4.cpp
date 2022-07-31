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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    ll ans=0;
    for(int i=1;i<=n;i++){
		vector<vector<vector<ll>>> dp(n+1,vector<vector<ll>>(i+1,vector<ll>(i,0)));
		dp[0][0][0] = 1;
		for(int j=0;j<n;j++){
			for(int k=0;k<=i;k++){
				for(int l=0;l<i;l++){
					dp[j+1][k][l] += dp[j][k][l]%mod;
					if(k!=i)dp[j+1][k+1][(l+a[j])%i] += dp[j][k][l]%mod;
				}
			}
		}
		ans += dp[n][i][0]%mod;
	}
	
	cout<<ans%mod<<endl;
	
	return 0;
    
}
