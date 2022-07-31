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
    vector<int> a(n+1);
    vector<int> num(n+1,0);
    ll p=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==i){
            num[i]=1;
            p++;
        }
    }
    
    ll ans=0;
    /*
    for(int i=1; i<=n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    */
    for(int i=1; i<=n; i++){
        if(num[i]==1){
            ans+=p-1;
        }else{
            int index=a[i];
            if(a[index]==i){
                //cout<<i<<" "<<index<<endl;
                ans++;
            }
        }
    }
    cout<<ans/2<<endl;
}
