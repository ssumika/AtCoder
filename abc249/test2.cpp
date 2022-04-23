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
#define ll long long

int main(){
   string s;
   cin>>s;
   set<char> a;
   int o=0;
   int k=0;
   for(int i=0; i<s.size(); i++){
       if(s[i]>='A' && s[i]<='Z'){
           o++;
       }else{
           k++;
       }
   }
   if(o==0 || k==0){
       cout<<"No"<<endl;
       return 0;
   }
   for(int i=0; i<s.size(); i++){
       a.insert(s[i]);
   }
   if(a.size()!=s.size()){
       cout<<"No"<<endl;
   }else{
       cout<<"Yes"<<endl;
   }
}
