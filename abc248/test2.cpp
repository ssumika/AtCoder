#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>

using namespace std;

#define mod 998244353

int main(){
   long long a,b,k;
   cin>>a>>b>>k;
   long long ans=0;
   while(a<b){
       a*=k;
       ans++;
   }
   cout<<ans<<endl;
}