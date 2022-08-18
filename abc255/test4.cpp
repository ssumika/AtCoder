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
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    vector<ll> sum(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        if(i==0){
            sum[i]=a[i];
        }else{
            sum[i]=sum[i-1]+a[i];
        }
    }

    vector<ll> ans;
    vector<ll> x(q);
    for(int i=0; i<q; i++){
        cin>>x[i];
    }

    for(int i=0; i<q; i++){
        int k;
        int l=-1;
        int r=n;
        ll t=x[i];
        while(r-l>1){
            //cout<<l<<" "<<r<<endl;
            int mid=(l+r)/2;
            if(a[mid]<=t){
                l=mid;
            }else{
                r=mid;
            }
        }
        k=l;
        //cout<<k<<endl;
        if(k==-1){
            ans.push_back(sum[n-1]-t*n);
        }else{
            //cout<<k<<" "<<sum[k]<<endl;
            ans.push_back(t*(k+1)-sum[k]+(sum[n-1]-sum[k])-t*(n-(k+1)));
        }
    }

    for(int i=0; i<q; i++){
        cout<<ans[i]<<endl;
    }

}
