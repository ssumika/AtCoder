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
 
 
int main(){
    int y;
    cin>>y;
    while(y%4!=2){
        y++;
    }
    cout<<y<<endl;
}