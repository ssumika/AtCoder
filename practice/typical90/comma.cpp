#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long count=0;
    
    if(n>=1000){
        count+=n-999;
    }
    if(n>=1000000){
        count+=n-999999;
    }
    if(n>=1000000000){
        count+=n-999999999;
    }
    if(n>=1000000000000){
        count+=n-999999999999;
    }
    if(n>=1000000000000000){
        count+=n-999999999999999;
    }
    
    cout<<count<<endl;
}