#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][6];
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            cin>>a[i][j];
        }
    }
    int dice[n]={0};
    long long ans=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            dice[i]+=a[i][j];
        }
        ans=(ans*dice[i])%1000000007;
    }
    cout<<ans<<endl;
}
