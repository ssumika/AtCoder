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
    long long a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    vector<vector<long long>> dp(n+1,vector<long long>(3001,0));
    dp[0][0]=1;

    for(int i=0; i<n+1; i++){
        for(int j=0; j<3000; j++){
            dp[i][j+1]+=dp[i][j]%mod;
            dp[i][j+1]%=mod;
        }
        if(i!=n){
            for(int j=a[i]; j<=b[i]; j++){
                dp[i+1][j]+=dp[i][j]%mod;
                dp[i+1][j]%=mod;
            }
        }
    }
    cout<<dp[n][3000]<<endl;

}
