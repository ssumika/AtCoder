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
    int x,y,n;
    cin>>x>>y>>n;
    
    int ans;
    ans=min(y*(n/3)+x*(n%3),x*n);
    cout<<ans<<endl;

}
