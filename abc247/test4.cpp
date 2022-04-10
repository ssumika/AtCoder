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

long long lower_bound(vector<long long> count, long long c){
    long long left=-1;
    long long right=count.size();
    while(right-left>1){
        long long mid=(left+right)/2;
        if(count[mid]<c){
            left=mid;
        }else{
            right=mid;
        }
    }
    return right;
}

int main(){
  int q;
  cin>>q;
  
  deque<long long> boal;
  vector<long long> count;
  vector<long long> num;
  long long sum=0;
  long long number=0;
  long long no=0;
  long long cplus=0;

  boal.push_back(0);
  count.push_back(0);
  num.push_back(0);
  vector<long long> ans;

  for(int i=0; i<q; i++){
      int query;
      cin>>query;
      if(query==1){
          long long x;
          long long c;
          cin>>x>>c;
          boal.push_back(x);
          count.push_back(c+sum);
          num.push_back(number+c*x);
          sum=c+sum;
          number=number+c*x;
      }else{
          long long c;
          cin>>c;
          cplus+=c;
          long long index=lower_bound(count,cplus);
          ans.push_back(num[index]-(count[index]-cplus)*boal[index]-no);
          no+=num[index]-(count[index]-cplus)*boal[index];
      }
  }

  for(int i=0; i<ans.size(); i++){
      cout<<ans[i]<<endl;
  }
 
}
  

