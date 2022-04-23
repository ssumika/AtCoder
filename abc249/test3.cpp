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
   int n,k;
   cin>>n>>k;
   vector<string> s;
  for(int i=0; i<n; i++){
      string st;
      cin>>st;
      s.push_back(st);
  }

int ans=0;
  for(int bit=0; bit<(1<<n); bit++){
      vector<int> a(26);
      for(int i=0; i<n; i++){
          if(bit&(1<<i)){
              for(int j=0; j<s[i].size(); j++){
                  //cout<<s[i][j]<<endl;
                  a[s[i][j]-'a']++;
              }
          }
      }
      int count=0;
      for(int l=0; l<a.size(); l++){
        if(a[l]==k){
            count++;
        }
      }
      ans=max(ans,count);
  }
  std::cout<<ans<<endl;
}
