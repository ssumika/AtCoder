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
#include<bitset>

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a;
    vector<int> sum(n+1);
    vector<int> ans;
    for(int i=0; i<n; i++){
        int l;
        cin>>l;
        if(i==0){
            sum[i+1]=l;
        }else{
            sum[i+1]=sum[i]+l;
        }
        for(int j=0; j<l; j++){
            int num;
            cin>>num;
            a.push_back(num);
        }
    }
    for(int i=0; i<q; i++){
        int s,t;
        cin>>s>>t;
        ans.push_back(a[sum[s-1]+t-1]);
    }
    for(int i=0; i<q; i++){
        cout<<ans[i]<<endl;
    }
}
