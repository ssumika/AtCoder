#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n+1];
    int sum=0;
    t[0]=0;
    for(int i=1; i<=n; i++){
            cin>>t[i];
            sum+=t[i];
    }

    bool dp[n+1][sum+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            dp[i][j]=false;
        }
    }

    dp[0][0]=true;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=sum; j++){
            if(dp[i][j]){
                dp[i+1][j]=true;
            }
            if(j-t[i]>=0 && dp[i][j-t[i]]){
                dp[i+1][j]=true;
            }
        }
        
    }
/*
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(dp[i][j]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
*/
    int ans=1000001;
    for(int i=0; i<=sum; i++){
        if(dp[n][i]){
            int score=max(i,sum-i);
            if(ans>score){
                ans=score;
            }
        }
    }
    cout<<ans<<endl;
}