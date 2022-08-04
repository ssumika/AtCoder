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
    vector<vector<char>> s(n,vector<char>(9));
    for(int i=0; i<n; i++){
        for(int j=0; j<9; j++){
            cin>>s[i][j];
        }
    }

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<9; j++){
            if(s[i][j]=='x'){
                ans++;
            }else if(s[i][j]=='o'){
              if(i==n-1 || s[i+1][j]!='o'){
                ans++;
              }  
            }
        }
    }
    cout<<ans<<endl;
}