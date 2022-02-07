#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }


    int dp[n+1][x+1][y+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=x; j++){
            for(int k=0; k<=y; k++){
                dp[i][j][k]=301;
            }
        }
    }
   
    dp[0][0][0]=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<=x; j++){
            for(int k=0; k<=y; k++){
                dp[i+1][min(j+a[i],x)][min(k+b[i],y)]=min(dp[i+1][min(j+a[i],x)][min(k+b[i],y)],dp[i][j][k]+1);
                dp[i+1][j][k]=min(dp[i+1][j][k],dp[i][j][k]);
            }
        }
    }

    if(dp[n][x][y]==301){
        cout<<"-1"<<endl;
    }else{
        cout<<dp[n][x][y]<<endl;
    }

}
