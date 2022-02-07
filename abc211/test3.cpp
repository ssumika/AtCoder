#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;
long long mod=1000000007;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int dp[n+1][9]={0};

    for(int i=0; i<=n; i++){
        dp[i][0]=1;
    }

    for(int j=1; j<=8; j++){
        dp[0][j]=0;
    }

    string t="chokudai";

    for(int i=1; i<=n; i++){
        for(int j=1; j<=8; j++){
            if(s[i-1]!=t[j-1]){
                dp[i][j]=dp[i-1][j]%mod;
            }else{
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
            }
        }
    }
    cout<<dp[n][8]<<endl;
}
