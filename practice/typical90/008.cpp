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

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    ll mod=1000000007;

    string atcoder="atcoder";
    vector<vector<ll>> dp(n+1,vector<ll>(8,0));
    dp[0][0]=1LL;
    for(int i=0; i<n; i++){
        for(int j=0; j<=atcoder.size(); j++){
            dp[i+1][j]+=dp[i][j];
            dp[i+1][j]%=mod;
            if(s[i]==atcoder[j]){
                dp[i+1][j+1]+=dp[i][j];
                dp[i+1][j+1]%=mod;
            }
        }
    }
    std::cout<<dp[n][7]<<endl;
}
