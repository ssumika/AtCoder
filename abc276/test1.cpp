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
   string s;
   cin>>s;
   int n=s.size();
   for(int i=n-1; i>=0; i--){
        if(s[i]=='a'){
           cout<<i+1<<endl;
           return 0;
        }
   }
   cout<<"-1"<<endl;
}
