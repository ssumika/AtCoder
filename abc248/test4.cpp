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
 
#define mod 998244353
 
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<vector<int>> index(n+1);
    for(int i=0; i<n; i++){
        cin>>a[i];
        index[a[i]].push_back(i);
    }
/*
    for(int i=0; i<=n; i++){
        cout<<index[i].size()<<endl;
    }
*/
    int q;
    cin>>q;
    vector<int> ans;
    for(int i=0; i<q; i++){
        int l,r,x;
        cin>>l>>r>>x;
        if(index[x].size()==0){
            ans.push_back(0);
            continue;
        }
 
        ans.push_back(lower_bound(index[x].begin(),index[x].end(),r)-lower_bound(index[x].begin(),index[x].end(),l-1));
    }
    for(int i=0; i<q; i++){
        cout<<ans[i]<<endl;
    }
}