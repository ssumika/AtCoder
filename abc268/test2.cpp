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
    string s,t;
    cin>>s>>t;
    bool flg=false;
    if(s.size()<=t.size()){
        for(int i=0; i<s.size(); i++){
            if(s[i]!=t[i]){
                flg=false;
                break;
            }
            flg=true;
        }
    }
    if(flg==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
