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
#include<bitset>

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    int n;
    cin>>n;
    string ans;
    if(n/16<10){
        ans+=n/16+'0';
    }else if(n/16==10){
        ans+="A";
    }else if(n/16==11){
        ans+="B";
    }else if(n/16==12){
        ans+="C";
    }else if(n/16==13){
        ans+="D";
    }else if(n/16==14){
        ans+="E";
    }else if(n/16==15){
        ans+="F";
    }

    if(n%16<10){
        ans+=n%16+'0';
    }else if(n%16==10){
        ans+="A";
    }else if(n%16==11){
        ans+="B";
    }else if(n%16==12){
        ans+="C";
    }else if(n%16==13){
        ans+="D";
    }else if(n%16==14){
        ans+="E";
    }else if(n%16==15){
        ans+="F";
    }
    cout<<ans<<endl;

}
