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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int,int> cnt;
    ll ans=0;
    for(int i=0; i<n; i++){
        ans+=cnt[i-a[i]];
        cnt[i+a[i]]++;
    }
    cout<<ans<<endl;
}
