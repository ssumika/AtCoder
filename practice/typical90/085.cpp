#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

 
int main(){
    long long K;
    cin>>K;

    long long ans=0;

    vector<long long> divisor;
    for(long long i=1; i*i<=K; i++){
        if(K%i==0){
            divisor.push_back(i);
            if(i*i!=K){
                divisor.push_back(K/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());

    for(int i=0; i<divisor.size(); i++){
        for(int j=i; j<divisor.size(); j++){
            long long a=divisor[i];
            long long b=divisor[j];
            if(K/a<b){
                continue;
            }
            if(K%(a*b)==0 && K/(a*b)>=b){
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}