#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long x,long long y){
    long long tmp;
    if(x<y){
        tmp=x;
        x=y;
        y=tmp;
    }
    while(y>0){
        tmp=y;
        y=x%y;
        x=tmp;
    }

    return x;
}


int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long g=gcd(gcd(a,b),c);
    long long ans=a/g+b/g+c/g-3;
    cout<<ans<<endl;
}