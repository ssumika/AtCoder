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

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    dp[0][0]=true;
    for(int i=1;i<=n ;i++){
       for(int j=1; j<=s; j++){
           if((j-a[i-1]>=0 && dp[i-1][j-a[i-1]]==true) || ((j-b[i-1]>=0) && dp[i-1][j-b[i-1]]==true)){
               dp[i][j]=true;
           }
       }
    }
    if(dp[n][s]==true){
        vector<string> ans;
        int w=s;
        for(int i=n; i>=1; i--){
            if((w-a[i-1]>=0) && dp[i-1][w-a[i-1]]==true){
                ans.push_back("A");
                w-=a[i-1];
            }else if((w-b[i-1]>=0) && dp[i-1][w-b[i-1]]==true){
                ans.push_back("B");
                w-=b[i-1];
            }
            //cout<<i<<":"<<w<<endl;
        }

        for(int i=n-1; i>=0; i--){
            cout<<ans[i];
        }
        cout<<endl;

    }else{
        cout<<"Impossible"<<endl;
    }
}
