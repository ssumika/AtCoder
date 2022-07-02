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
    int k;
    cin>>k;
    if(k<=59){
        if(k<=9){
            cout<<"21:0"<<k<<endl;
        }else{
            cout<<"21:"<<k<<endl;
        }
    }else{
        if(k<=69){
            cout<<"22:0"<<k-60<<endl;
        }else{
            cout<<"22:"<<k-60<<endl;
        }
    }
}