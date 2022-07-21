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

long long pow(long long x,long long n){
    long long ans=1;
    while(n>0){
        if(n%2==1){
            ans*=x;
            ans%=mod;
        }
        n/=2;
        x*=x;
        x%=mod;
    }
    return ans;
}


int main(){
    int k;
    string s,t;
    cin>>k;
    cin>>s;
    cin>>t;

    
    vector<ll> scount(10,0);
    vector<ll> tcount(10,0);
    for(int i=0; i<s.size()-1; i++){
        scount[s[i]-'0']++;
        tcount[t[i]-'0']++;
    }

    vector<pair<ll,ll>> swin;

    ll m=0;
    for(int snum=1; snum<=9; snum++){
        for(int tnum=1; tnum<=9; tnum++){
            ll sscore=0;
            ll tscore=0;
            scount[snum]++;
            tcount[tnum]++;
            if(scount[snum]+tcount[snum]>k || tcount[tnum]+scount[tnum]>k){
                scount[snum]--;
                scount[tnum]--;
                continue;
            }
            for(int i=0; i<10; i++){
                sscore+=scount[i]*pow(10,i);
                tscore+=tcount[i]*pow(10,i);
            }
            if(sscore>tscore){
                swin.push_back({snum,tnum});
            }
            scount[snum]--;
            scount[tnum]--;
        }
    }

    ll win=0;
    for(int i=0; i<swin.size(); i++){
        ll sc=swin[i].first;
        ll tc=swin[i].second;
        if(sc==tc){
            win+=(scount[sc]+tcount[tc]-sc)*(scount[sc]+tcount[tc]-sc-1)/2;
        }else{
            win+=(scount[sc]+tcount[sc]-sc)*(scount[tc]+tcount[tc]-tc-1);
        }
    }

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            ll sc=i;
            ll tc=j;
            if(sc==tc){
                m+=(scount[sc]+tcount[tc]-sc)*(scount[sc]+tcount[tc]-sc-1)/2;
            }else{
                m+=(scount[sc]+tcount[sc]-sc)*(scount[tc]+tcount[tc]-tc-1);
            }
        }
    }
    cout<<(double)win/(double)m<<endl;
    
    
}