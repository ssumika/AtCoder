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

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll ans=((((((a%mod)*(b%mod)%mod)*(c%mod))%mod))-(((((d%mod)*(e%mod)%mod)*(f%mod))%mod)))%mod;
    if(ans>=0){
        cout<<ans<<endl;
    }else{
        while(ans>=0){
            ans+=mod;
        }
        cout<<ans<<endl;
    }
}
