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


int main(){
    int n;
    cin>>n;
    vector<ll> x(n);
    vector<ll> y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    ll mid_x=x[n/2];
    ll mid_y=y[n/2];

    ll ans=0;
    for(int i=0; i<n; i++){
        ans+=abs(x[i]-mid_x)+abs(y[i]-mid_y);
    }
    cout<<ans<<endl;
    
}
