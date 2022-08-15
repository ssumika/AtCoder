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
    ll k;
    vector<ll> t(5);
    for(int i=0; i<5; i++){
        cin>>t[i];
    }
    cin>>k;
    sort(t.begin(),t.end());
    if(t[4]-t[0]<=k){
        cout<<"Yay!"<<endl;
    }else{
        cout<<":("<<endl;
    }
}