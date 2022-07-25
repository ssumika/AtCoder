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
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> cnt;
    vector<int> num;
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(cnt[a[i]]==0){
            num.push_back(a[i]);
        }
        cnt[a[i]]++;
    }
    for(int i=0; i<num.size(); i++){
        if(cnt[num[i]]!=num[i]){
            if(cnt[num[i]]<num[i]){
                ans+=cnt[num[i]];
            }else{
                ans+=cnt[num[i]]-num[i];
            }
        }
    }
    cout<<ans<<endl;
}
