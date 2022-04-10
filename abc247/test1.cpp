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

int main(){
  int n;
  cin>>n;
  vector<string> s(n);
  vector<string> t(n);
  vector<pair<string,int>> name;

  for(int i=0; i<n; i++){
      cin>>s[i]>>t[i];
      name.push_back(make_pair(s[i],1));
      name.push_back(make_pair(t[i],2));
  }

  for(int i=0; i<n; i++){
      int flg=0;
    for(int j=0; j<2*n; j++){
        if(j/2==i){
            continue;
        }
        if(s[i]==name[j].first || t[i]==name[j].first){
            flg++;
        }
    }
    if(flg>=2){
        cout<<"No"<<endl;
        return 0;
    }
  }
  cout<<"Yes"<<endl;
}
  

