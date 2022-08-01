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
 
#define mod 1000000007
 
int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<ll> sum(n,0);
    for(int i=1; i<n; i++){
        if(s[i-1]=='A' && s[i]=='C'){
            sum[i]=sum[i-1]+1;
        }else{
            sum[i]=sum[i-1];
        }
    }
    vector<int> ans;
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        ans.push_back(sum[r]-sum[l]);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
}