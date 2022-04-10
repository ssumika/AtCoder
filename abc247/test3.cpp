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

string ans(int n){
    if(n==1){
        return "1";
    }else{
        return ans(n-1)+" "+to_string(n)+" "+ans(n-1);
    }
}

int main(){
  int n;
  cin>>n;
  string s=ans(n);
  for(int i=0; i<s.size(); i++){
      cout<<s[i];
  }
  cout<<endl;
}
  

