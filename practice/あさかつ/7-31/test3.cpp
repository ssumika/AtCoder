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
    map<ll,ll> m;
    vector<ll> s;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        m[a]++;
        if(m[a]==2){
            s.push_back(a);
        }
        if(m[a]==4){
            s.push_back(a);
        }
    }

    sort(s.rbegin(),s.rend());
    if(s.size()<2){
        cout<<"0"<<endl;
    }else{
        cout<<s[0]*s[1]<<endl;
    }
}