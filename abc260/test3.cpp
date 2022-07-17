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
    ll n,x,y;
    cin>>n>>x>>y;

    vector<ll> r(n+1);
    vector<ll> b(n+1);
    
    r[1]=0;
    b[1]=1;
    for(int i=2; i<=n; i++){
        b[i]=r[i-1]+b[i-1]*y;
        r[i]=r[i-1]+b[i]*x;
    }
    cout<<r[n]<<endl;
}