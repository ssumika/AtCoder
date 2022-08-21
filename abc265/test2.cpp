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
    ll n,m,t;
    cin>>n>>m>>t;
    vector<ll> a(n-1);
    for(int i=0; i<n-1; i++){
        cin>>a[i];
    }

    vector<ll> x(m),y(m);
    for(int i=0; i<m; i++){
        cin>>x[i]>>y[i];
    }
    
    ll time=t;
    ll i=0;
    ll index=0;
    while(time>0 && i<n-1){
        if(index<m && x[index]==i+1){
            time+=y[index];
            index++;
        }
        time-=a[i];
        i++;
        //cout<<time<<endl;
    }
    if(i==n-1 && time>0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
