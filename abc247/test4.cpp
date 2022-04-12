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
  int q;
  cin>>q;
  deque<pair<long long,long long>> boal;
  vector<long long> ans;
  for(int i=0; i<q; i++){
      int query;
      cin>>query;
      if(query==1){
          long long x;
          long long c;
          cin>>x>>c;
          boal.push_back({x,c});
      }else{
          long long sum=0;
          long long c;
          cin>>c;
          
          while(c>0){
              auto top=boal.front();
              if(c>top.second){
                  c-=top.second;
                  sum+=top.first*top.second;
                  boal.pop_front();
              }else{
                  top.second-=c;
                  boal.front()=top;
                  sum+=c*top.first;
                  c=0;
              }
              
          }
          ans.push_back(sum);
      }
  }

  for(int i=0; i<ans.size(); i++){
      cout<<ans[i]<<endl;
  }
 
}
  

