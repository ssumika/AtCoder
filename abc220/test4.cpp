#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;
#define mod 998244353

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<vector<long long>> dp(n,vector<long long>(10,0));
    dp[0][a[0]]=1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<10; j++){
            dp[i+1][(j+a[i+1])%10]+=dp[i][j]%mod;
            dp[i+1][(j+a[i+1])%10]%=mod;
            dp[i+1][(j*a[i+1])%10]+=dp[i][j]%mod;
            dp[i+1][(j*a[i+1])%10]%=mod;
        }
    }
    for(int i=0; i<10; i++){
        cout<<dp[n-1][i]<<endl;
    }
}
