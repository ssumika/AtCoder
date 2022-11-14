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
    int n;
    cin>>n;
    vector<string> s(n);
    set<string> sets;
    for(int i=0; i<n; i++){
        cin>>s[i];
        sets.insert(s[i]);
    }

    bool flg=true;
    if(sets.size()!=n){
        flg=false;
    }else{
        for(int i=0; i<n; i++){
            if(s[i][0]!='H' && s[i][0]!='D' && s[i][0]!='C' && s[i][0]!='S'){
                flg=false;
            }
            if(s[i][1]!='A' &&( s[i][1]-'0' > 9  || s[i][1]-'0' <= 1 )&& s[i][1]!='T' && s[i][1]!='J' && s[i][1]!='Q' &&s[i][1]!='K'){
                flg=false;
            }
        }
    }
    if(flg==false){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
