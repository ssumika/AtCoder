#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
   vector<int> p(26);
   string s="";
   for(int i=0; i<26; i++){
       cin>>p[i];
       s+=(char)'a'+p[i]-1;
   }
   cout<<s<<endl;
}
