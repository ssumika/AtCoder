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

ll score(string s){
    vector<ll> count(10);
    iota(count.begin(),count.end(),0);
    for(char c : s){
        count[c-'0']*=10;
    }
    return accumulate(count.begin(),count.end(),0);
}


int main(){
    int k;
    string s,t;
    cin>>k;
    cin>>s;
    cin>>t;

    vector<ll> cnt(10,k);
    for(char c : s+t){
        cnt[c-'0']--;
    }

    ll win=0;
    for(int x=1; x<=9; x++){
        for(int y=1; y<=9; y++){
            s.back()='0'+x;
            t.back()='0'+y;
            if(score(s)<=score(t)) continue;
            win+=cnt[x]*(cnt[y]-(x==y));
        }
    }

    ll rem=9*k-8;
    cout<<double(win)/(rem*(rem-1))<<endl;
    
    
}