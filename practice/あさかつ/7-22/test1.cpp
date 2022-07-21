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
    if(n<=1){
        cout<<"1"<<endl;
    }else if(n<=3){
        cout<<"2"<<endl;
    }else if(n<=7){
        cout<<"4"<<endl;
    }else if(n<=15){
        cout<<"8"<<endl;
    }else if(n<=31){
        cout<<"16"<<endl;
    }else if(n<=63){
        cout<<"32"<<endl;
    }else{
        cout<<"64"<<endl;
    }
}