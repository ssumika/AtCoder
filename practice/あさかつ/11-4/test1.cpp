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
    ll x;
    cin>>x;
    ll money=100;
    int ans=0;
    while(money<x){
        money+=money/100;
        ans++;
    }
    cout<<ans<<endl;
}
