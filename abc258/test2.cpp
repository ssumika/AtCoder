#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>

using namespace std;
using ll=long long;

#define mod 998244353

int main(){
    int n;
    cin>>n;
    vector<vector<ll>> a(2*n,vector<ll>(2*n));
    ll ans=0;
    for(int i=0; i<n; i++){
        string b;
        cin>>b;
        for(int j=0; j<n; j++){
            ll new_b=b[j]-'0';
            a[i][j]=new_b;
            a[i+n][j]=new_b;
            a[i][j+n]=new_b;
            a[i+n][j+n]=new_b;
        }
    }
/*
    for(int i=0; i<2*n; i++){
        for(int j=0; j<2*n; j++){
            std::cout<<a[i][j]<<endl;
        }
    }
*/
    for(int i=0; i<n*n; i++){
        int x=i%n;
        int y=i/n;
        ll s=0;
        for(int j=0; j<n; j++){
            s+=a[x+j][y]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x][y+j]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x-j+n][y]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x][y-j+n]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x+j][y+j]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x-j+n][y-j+n]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x-j+n][y+j]*pow(10,n-j-1);
        }
        ans=max(ans,s);

        s=0;
        for(int j=0; j<n; j++){
            s+=a[x+j][y-j+n]*pow(10,n-j-1);
        }
        ans=max(ans,s);
    }
    std::cout<<ans<<endl;
}
