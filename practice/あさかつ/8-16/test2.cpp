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
    vector<vector<int>> a(2,vector<int>(n));
    int s=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(i==1){
                s+=a[i][j];
            }
        }
    }
    s+=a[0][0];

    int ans=s;
    //cout<<s<<endl;
    for(int k=1; k<n; k++){
        //cout<<a[1][k-1]<<" "<<a[0][k]<<endl;
        ans=max(ans,s-a[1][k-1]+a[0][k]);
        s=s-a[1][k-1]+a[0][k];
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}