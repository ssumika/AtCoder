#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    long long k,a,b;
    cin>>k>>a>>b;
    long long ka=0,kb=0,ak=1,bk=1;
    while(a>0){
        ka+=(a%10)*ak;
        a/=10;
        ak*=k;
        //cout<<ka<<endl;
    }
    while(b>0){
        kb+=(b%10)*bk;
        b/=10;
        bk*=k;
    }
    cout<<ka*kb<<endl;
}
