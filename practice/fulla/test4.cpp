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
    string s;
    cin>>s;
    ll k;
    cin>>k;
    int n=s.size();
    vector<int> cnt(n+1,0);
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            cnt[i+1]=cnt[i]+1;
        }else{
            cnt[i+1]=cnt[i];
        }
    }

    int l=0;
    int ans=0;
    for(int r=1; r<=n; r++){
        while(r>l && cnt[r]-cnt[l]>k){
            l++;
        }
        ans=max(ans,r-l);
    }
    cout<<ans<<endl;
}
