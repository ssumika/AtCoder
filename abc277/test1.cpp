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
    vector<int> p(n);
    int ans=1;
    for(int i=0; i<n; i++){
        cin>>p[i];
        if(p[i]==x){
            ans=i+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}
