#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>
 
using namespace std;
using ll=long long;
 
#define mod 998244353
 
 
int f(int n){
    if(n==0) return 1;
    else return n*f(n-1);
}
 
 
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}