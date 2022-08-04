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
    vector<string> s(3);
    string t;
    for(int i=0; i<3; i++){
        cin>>s[i];
    }
    cin>>t;

    string ans="";
    //cout<<t.size()<<endl;
    for(int i=0; i<t.size(); i++){
        //cout<<t[i]-'0'<<endl;
        ans+=s[t[i]-'0'-1];
    }
    cout<<ans<<endl;
}