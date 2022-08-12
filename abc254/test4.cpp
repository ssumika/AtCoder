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
    int ans=0;
    for(int i=1; i<=n; i++){
        int k=i;
        for(int j=2; j*j<=k; j++){
            while(k%(j*j)==0){
                k/=j*j;
            }
        }
        for(int j=1; k*j*j<=n; j++){
            ans++;
        }
    }
    cout<<ans<<endl;
}
