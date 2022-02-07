#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long k=0;
    long long num=n;
    while(1){
        if(num<=1){
            cout<<k<<endl;
            return 0;
        }else{
            k++;
            num/=2;
        }
    }
}