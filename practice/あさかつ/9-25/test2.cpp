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
    int l,h,n;
    vector<int> ans;
    cin>>l>>h;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>h){
            ans.push_back(-1);
        }else if(a[i]>=l){
            ans.push_back(0);
        }else{
            ans.push_back(l-a[i]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}
