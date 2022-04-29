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

#define mod 1000000007
#define ll long long

int rows(vector<int> R){
    map<int,int> m;
    int r=0;
    for(int i=0; i<R.size(); i++){
        m[R[i]]++;
        r=max(r,m[R[i]]);
    }

    return r;
}

int main(){
   int h,w;
   cin>>h>>w;
   vector<vector<int>> p(h,(vector<int>(w)));
   for(int i=0; i<h; i++){
       for(int j=0; j<w; j++){
           cin>>p[i][j];
       }
   }

   int ans=0;
   vector<int> s;
   for(int bit=1; bit<(1<<h); bit++){
       vector<int> R;
        for(int i=0; i<w; i++){
            int num=-1;
            bool flg=true;
            for(int j=0; j<h; j++){
                if(bit&(1<<j)){
                    if(num==-1) num=p[j][i];
                    if(num!=p[j][i]) flg=false;
                    num=p[j][i];
                }
            }
            if(flg==true) R.push_back(num);
        }

        int num_h=0;
        for(int i=0; i<h; i++){
            if((1<<i)&bit){
               num_h++;
            }
       }
       ans=max(ans,rows(R)*num_h);
   }
        
   cout<<ans<<endl;
}