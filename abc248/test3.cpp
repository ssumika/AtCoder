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
  int n,m,k;
  cin>>n>>m>>k;
  vector<vector<int>> dp(n+1,vector<int>(k+1,0));
  dp[0][0]=1;
  for(int i=0; i<n; i++){
    for(int j=0; j<k; j++){
        for(int l=1; l<=m; l++){
          if(j+l<=k){
            dp[i+1][j+l]+=dp[i][j];
            dp[i+1][j+l]%=mod;
          }
        }
    }
  }
  long long ans=0;
  for(int i=0; i<=k; i++){
    ans+=dp[n][i];
    ans%=mod;
  }
  cout<<ans<<endl;
}