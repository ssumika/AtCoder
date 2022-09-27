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
    string a,b;
    cin>>a>>b;
    int n=min(a.size(),b.size());
    bool flg=true;
    for(int i=0; i<n; i++){
        if((a[a.size()-1-i]-'0')+(b[b.size()-1-i]-'0')>=10){
            flg=false;
        }
    }
    if(flg==true){
        cout<<"Easy"<<endl;
    }else{
        cout<<"Hard"<<endl;
    }
}
