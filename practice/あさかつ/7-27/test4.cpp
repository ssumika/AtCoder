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
    int n;
    cin>>n;
    vector<ll> d(n);
    vector<ll> cnt(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
        cnt[d[i]]++;
    }
    if(cnt[0]!=1 || d[0]!=0){
        cout<<"0"<<endl;
        return 0;
    }

    ll ans=1;
    for(int i=1; i<n; i++){
        ans=ans*cnt[d[i]-1]%mod;
    }
    cout<<ans<<endl;

}
