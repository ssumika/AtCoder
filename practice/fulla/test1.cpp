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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<"Yes"<<endl;
    }else if(s1[0]==s2[1] && s1[1]==s2[0]){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}
