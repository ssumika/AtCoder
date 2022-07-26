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
    int n,x;
    cin>>n>>x;
    int sum=0;
    int ans=0;
    int k=1000000;
    vector<int> m(n);
    for(int i=0; i<n; i++){
        cin>>m[i];
        sum+=m[i];
        ans++;
        k=min(k,m[i]);
    }
    cout<<ans+(x-sum)/k<<endl;
}
