#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> p(n,vector<int>(3));
    vector<int> psum(n,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>p[i][j];
            psum[i]+=p[i][j];
        }
    }
    
   vector<int> cpsum(n);
   cpsum.assign(psum.begin(),psum.end());
   sort(cpsum.rbegin(),cpsum.rend());
   int compare=cpsum[k-1];
   for(int i=0; i<n; i++){
       psum[i]+=300;
       if(compare<=psum[i]){
           cout<<"Yes"<<endl;
       }else{
           cout<<"No"<<endl;
       }
   }
    
}