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

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    vector<bool> p(n,false);
    vector<int> ans;
    for(int i=0; i<m; i++){
        cin>>a[i];
    }

    for(int i=m-1; i>=0; i--){
        if(p[a[i]-1]==false){
            ans.push_back(a[i]);
            p[a[i]-1]=true;
        }
    }
    for(int i=0; i<n; i++){
        if(p[i]==false){
            ans.push_back(i+1);
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}