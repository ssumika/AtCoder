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
    int p=0;
    vector<int> a(n);
    vector<int> sum(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sum[0]=a[n-1];
    for(int i=1; i<n; i++){
        sum[i]=sum[i-1]+a[n-1-i];
    }
    for(int i=0; i<n; i++){
        //cout<<sum[i]<<endl;
        if(sum[i]>=4){
            p++;
        }
    }
    cout<<p<<endl;
}
