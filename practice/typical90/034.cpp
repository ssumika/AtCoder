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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int l=0;
    int r=0;
    int ans=0;
    map<int,int> m;
    for(r=0; r<n; r++){
        m[a[r]]++;
        while(l<r && m.size()>k){
            m[a[l]]--;
            if(m[a[l]]==0){
                m.erase(a[l]);
            }
            l++;
        }
        //cout<<l<<" "<<r<<endl;
        ans=max(ans,r-l+1);
    }
    cout<<ans<<endl;

}