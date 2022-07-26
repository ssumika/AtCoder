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

vector<pair<char,int>> runLength(string s){
    vector<pair<char,int>> p;
    char mark=s[0];
    int count=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]!=mark){
            //cout<<i<<endl;
            p.push_back({mark,count});
            mark=s[i];
            count=1;
        }else{
            count++;
        }
    }
    p.push_back({mark,count});
    return p;
}


int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    auto p=runLength(s);
    /*
    for(int i=0; i<p.size(); i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    */
   int sum=0;
   int zero=0;
   int l=0;
   int ans=0;
   for(int r=0; r<p.size(); r++){
        sum+=p[r].second;
        if(p[r].first=='0') zero++;
        while(k<zero){
            sum-=p[l].second;
            if(p[l].first=='0') zero--;
            l++;
        }
        ans=max(ans,sum);
   }
   cout<<ans<<endl;
    
}
