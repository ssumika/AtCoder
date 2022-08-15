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
    vector<ll> a(n);
    map<ll,ll> m; 
    ll s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
        m[a[i]]++;
    }

    int q;
    cin>>q;
    vector<ll> ans;
    for(int i=0; i<q; i++){
        ll b,c;
        cin>>b>>c;
        if(m[b]!=0){
            //cout<<m[b]<<endl;
            ans.push_back(s-b*m[b]+c*m[b]);
            s=s-b*m[b]+c*m[b];
            m[c]+=m[b];
            m[b]=0;
        }else{
            ans.push_back(s);
        }
    }

    for(int i=0; i<q; i++){
        cout<<ans[i]<<endl;
    }
    
}