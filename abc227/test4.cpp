#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
            cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    int ans=0;
    while(a[k-1]>0){
        ans+=a[k-1];
        for(int i=0; i<k; i++){
            a[i]-=a[k-1];
        }
        sort(a.rbegin(),a.rend());
    }
    cout<<ans<<endl;
}
