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
    string s;
    cin>>s;
    vector<int> w(n);
    vector<pair<int,int>> a;
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>w[i];
        a.push_back({w[i],s[i]});
        if(s[i]=='1') ans++;
    }
    sort(a.begin(),a.end());

    int cnt=ans;
    for(int i=0; i<n; i++){
        if(a[i].second=='1'){
            cnt--;
        }else{
            cnt++;
        }
        if(i<n-1 && a[i].first!=a[i+1].first){
            ans=max(ans,cnt);
        }else if(i==n-1){
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
}
