#include<iostream>
#include<cmath>
using namespace std;
 
 
int main(){
    long long K;
    cin>>K;

    long long ans=0;

    for(long long a=1; a*a*a<=K; a++){
        for(long long b=a; a*b*b<=K; b++){
            if(K%(a*b)==0){
                ans++;
            }
        }
    }
    
    cout<<ans<<endl;
}