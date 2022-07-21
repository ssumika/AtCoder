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
    ll x;
    cin>>x;
    if(x<=6){
        cout<<"1"<<endl;
    }else if(x<=11){
        cout<<"2"<<endl;
    }else if(x%11==0){
        cout<<x/11*2<<endl;
    }else if(x%11<=6){
        cout<<(x/11)*2+1<<endl;
    }else{
        cout<<x/11*2+2<<endl;
    }
}