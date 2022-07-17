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
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0; i<3; i++){
        m[s[i]]++;
    }
    for(int i=0; i<3; i++){
        if(m[s[i]]==1){
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
}