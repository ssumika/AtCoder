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
    string s[4];
    map<string,int> set;
    for(int i=0; i<4; i++){
        cin>>s[i];
        set[s[i]]++;
    }
    if(set.size()==4){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
 
}