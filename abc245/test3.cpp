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
#define ll long long

int main(){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    vector<bool> dp(n,false);
    vector<bool> dp2(n,false);

    dp[0]=true;
    dp2[0]=true;

    for(int i=0; i<n-1; i++){
       if(dp[i]==true){
           if(abs(a[i+1]-a[i])<=k){
               dp[i+1]=true;
           }
           if(abs(b[i+1]-a[i])<=k){
               dp2[i+1]=true;
           }
       }
       if(dp2[i]==true){
           if(abs(a[i+1]-b[i])<=k){
               dp[i+1]=true;
           }
           if(abs(b[i+1]-b[i])<=k){
               dp2[i+1]=true;
           }
       }     
       if(dp[i+1]==false && dp2[i+1]==false){
           cout<<"No"<<endl;
           return 0;
       }  
       
    }
    cout<<"Yes"<<endl;
}