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
 
#define mod 998244353

int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
        cin>>a[i];
   }
   vector<int> dp(n);
   dp[0]=0;
   dp[1]=abs(a[1]-a[0]);
   for(int i=0; i<n-2; i++){
        dp[i+2]=min(dp[i+1]+abs(a[i+2]-a[i+1]),dp[i]+abs(a[i+2]-a[i]));
   }
   cout<<dp[n-1]<<endl;
}