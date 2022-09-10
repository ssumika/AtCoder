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
    vector<int> p(2*n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        p[n+i]=p[i];
    }

    vector<int> r(n);
    for(int i=0; i<n; i++){
        r[(p[i]-i+n)%n]++;
        r[(p[i]-i+n-1)%n]++;
        r[(p[i]-i+n+1)%n]++;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        if(ans<r[i]){
            ans=r[i];
        }
    }
    cout<<ans<<endl;
}
