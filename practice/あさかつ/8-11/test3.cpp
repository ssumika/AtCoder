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
using ll=long long;
 
#define mod 998244353
 
int main(){
    int n;
    cin>>n;
    vector<int> t(n);
    for(int i=0; i<n; i++){
        cin>>t[i];
    }

    sort(t.rbegin(),t.rend());
    int ans=0;
    if(n==1 || n==2){
        ans=t[0];
    }else if(n==3){
        ans=max(t[0],t[1]+t[2]);
    }else{
        ans=min(max(t[0],t[1]+t[2]+t[3]),min(max(t[0]+t[2],t[1]+t[3]),max(t[0]+t[3],t[1]+t[2])));
    }
    cout<<ans<<endl;
}