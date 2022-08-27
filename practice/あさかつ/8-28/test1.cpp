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
   vector<vector<char>> c(2,vector<char>(3));
   for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        cin>>c[i][j];
    }
   }
   bool flg=true;
   for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        if(c[i][j]!=c[1-i][2-j]){
            flg=false;
        }
    }
   }
   if(flg==true){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}