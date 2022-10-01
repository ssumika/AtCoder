#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>
#include<bitset>

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    for(int i=0; i<n; i++){
        if(i==0){
            dp[i][a[i]]=true;
            dp[i][b[i]]=true;
        }else{
            for(int j=0; j<=s; j++){
                if(j+a[i]<=s && dp[i-1][j]==true){
                    dp[i][j+a[i]]=true;
                }
                if(j+b[i]<=s && dp[i-1][j]==true){
                    dp[i][j+b[i]]=true;
                }
                
            }
        }
    }
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<=s; j++){
            if(dp[i][j]==true){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    */
    if(dp[n-1][s]==true){
        cout<<"Yes"<<endl;
        int score=s;
        string ans;
        for(int i=n-1; i>=1; i--){
            if(score-a[i]>=0 && dp[i-1][score-a[i]]){
                ans+='H';
                score-=a[i];
            }else{
                ans+='T';
                score-=b[i];
            }
        }
        
        if(score==a[0]){
            ans+="H";
        }else{
            ans+="T";
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
