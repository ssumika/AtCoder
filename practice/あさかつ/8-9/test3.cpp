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
    int m,n,N;
    cin>>m>>n>>N;

    ll ans=N;
    ll p=N;
    ll make=0;
    while(p>=m){
        make=p/m*n;
        ans+=make;
        p=make+p%m;
        //cout<<make<<endl;
        //cout<<p<<endl;
    }
    
    cout<<ans<<endl;
}