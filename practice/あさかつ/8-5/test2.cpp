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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> sum(n,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i>0){
            sum[i]=sum[i-1]+a[i];
        }else{
            sum[i]=a[i];
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(sum[i]>=k){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;

}