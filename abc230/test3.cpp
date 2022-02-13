#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    long long n,a,b,p,q,r,s;
    cin>>n>>a>>b;
    cin>>p>>q>>r>>s;

    for(long long i=p; i<=q; i++){
        for(long long j=r; j<=s; j++){
            if(i-a==j-b){
                cout<<"#";
            }else if(i-a==-(j-b)){
                cout<<"#";
            }else{
                cout<<".";
            }
            
        }
        cout<<"\n";
    }
}
