#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
 
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> ng_x;
 
    for(int i=0; i<n; i++){
        int num=a[i];
        for(int j=2; j<=sqrt(num); j++){
            while(num%j==0){
                ng_x.push_back(j);
                num/=j;
            }
        }
        if(num!=1){
            ng_x.push_back(num);
        }
    }
    sort(ng_x.begin(),ng_x.end());
    ng_x.erase(unique(ng_x.begin(),ng_x.end()),ng_x.end());
    /*
    for(int i=0; i<ng_x.size(); i++){
        cout<<ng_x[i]<<endl;
    }
    */
 
   vector<bool> x(m+1,true);
   x[0]=false;
 
   for(int i=0; i<ng_x.size(); i++){
       int num=ng_x[i];
       for(int c=1; c*num<=m; c++){
           int j=c*num;
           x[j]=false;
       }
    }

    vector<int> k;
    for(int i=0; i<=m; i++){
        if(x[i]){
            k.push_back(i);
        }
    }

   cout<<k.size()<<endl;
   for(int i=0; i<k.size(); i++){
        cout<<k[i]<<endl;
   }
    
 
}