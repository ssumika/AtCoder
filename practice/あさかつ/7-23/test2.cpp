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
    vector<double> a(n);
    double ans=0;
    int count=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>0){
            count++;
            ans+=a[i];
        }
    }
    cout<<ceil(ans/count)<<endl;
}
