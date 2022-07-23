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
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    vector<int> cnt(101,0);
    for(int i=l1; i<=r1; i++){
        cnt[i]++;
    }
    for(int i=l2; i<=r2; i++){
        cnt[i]++;
    }
    int ans=0;
    for(int i=0; i<=100; i++){
        if(cnt[i]==2){
            ans++;
        }
    }
    if(ans>=1){
        cout<<ans-1<<endl;
    }else{
        cout<<ans<<endl;
    }
}
