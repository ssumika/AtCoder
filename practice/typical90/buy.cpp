#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
 
using namespace std;

long long a,b,x;

long long price(long long n){
    return a*n+b*(to_string(n).size());
}

int main(){
    cin>>a>>b>>x;
    long long right=1000000000;
    long long left=1;
    long long mid=(left+right)/2;
    while(right-left>1){
        if(price(mid)>x){
            right=mid;
        }else{
            left=mid;
        }
        mid=(left+right)/2;
    }
    if(price(1)>x){
        cout<<"0"<<endl;
    }else if(price(1000000000)<=x){
        cout<<"1000000000"<<endl;
    }else{
        cout<<left<<endl;
    }
}