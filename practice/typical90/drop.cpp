#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        a[i]=a[i]-b[i];
    }
    vector<long long> sum;
    for(int i=0; i<n; i++){
        sum.push_back(a[i]);
        sum.push_back(b[i]);
    }
    sort(sum.begin(),sum.end(),greater<int>());
    long long ans=0;
    for(int i=0; i<k; i++){
        ans+=sum[i];
    }
    cout<<ans<<endl;
}