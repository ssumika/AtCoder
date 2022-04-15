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

int main(){
    int n;
    cin>>n;
    vector<vector<int>> dp(n+1,vector<int>(10,0));
    for(int i=1; i<=9; i++){
        dp[1][i]=1;
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<=9; j++){
            for(int k=max(1,j-1); k<=min(9,j+1); k++){
                dp[i][k]+=dp[i-1][j];
                dp[i][k]%=mod;
            }
        }
    }
    int sum=0;
    for(int i=1; i<=9; i++){
        sum+=dp[n][i];
        sum%=mod;
    }
    cout<<sum<<endl;
}