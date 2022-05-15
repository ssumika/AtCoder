#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<stack>

using namespace std;

#define ll long long
#define mod 100000

ll button(ll num){
    ll ans=num;
    while(num>0){
        ans+=num%10;
        num/=10;
    }
    return ans%mod;
}

int main() {
    int n;
    ll k;
    cin>>n>>k;

    vector<bool> visit(mod,false);
    vector<ll> cycle;
    ll num=n;
    ll count=0;
    while(visit[num]==false){
        cycle.push_back(num);
        visit[num]=true;
        ll c=button(num);
        num=c;
        count++;
    }
/*
    for(int i=0; i<cycle.size(); i++){
        cout<<cycle[i]<<endl;
    }
*/
    ll syu=count;
    ll start;
    for(int i=0; i<cycle.size(); i++){
        if(cycle[i]==num){
            syu-=i;
            start=i;
            //cout<<count<<endl;
            break;
        }
    }
  
    if(k<count){
        cout<<cycle[k]<<endl;
    }else{
        //cout<<syu<<endl;
        //cout<<k-start<<endl;
        cout<<cycle[(k-start)%syu+start]<<endl;
    }
    
}