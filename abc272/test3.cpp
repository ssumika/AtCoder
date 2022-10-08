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
    vector<ll> a(n);
    vector<ll> b;
    b.push_back(0);
    vector<ll> c;
    c.push_back(0);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            c.push_back(a[i]);
        }else{
            b.push_back(a[i]);
        }
    }

    int bn=b.size();
    int cn=c.size();
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    if(bn==2 && cn==2){
        cout<<"-1"<<endl;
        return 0;
    }

    if(bn==1){
        cout<<c[cn-1]+c[cn-2]<<endl;
        return 0;
    }
    if(cn==1){
        cout<<b[bn-1]+b[bn-2]<<endl;
        return 0;
    }else{
        cout<<max(c[cn-1]+c[cn-2],b[bn-1]+b[bn-2])<<endl;
        return 0;
    }
}
