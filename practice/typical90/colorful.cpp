#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
const int mod = 1000000007;

long long pow(long long x,long long n){
    long long ans=1;
    while(n>0){
        if(n%2==1){
            ans*=x;
            ans%=mod;
        }
        n/=2;
        x*=x;
        x%=mod;
    }
    return ans;
}


int main(){
    long long n,k;
    long long ans;
    cin>>n>>k;
    if(n>=3){
        if(k>=3){
            cout<<(pow(k-2,n-2)*((k-1)*(k)%mod))%mod<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }else if(n==2){
        cout<<(k-1)*(k)%mod<<endl;
    }else if(n==1){
        cout<<k%mod<<endl;
    }
    
}