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
    vector<int> m(n);
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>m[i];
        ans+=max(80-m[i],0);
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

}