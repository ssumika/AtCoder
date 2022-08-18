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
    int n,k;
    cin>>n>>k;
    vector<int> a(k);
    for(int i=0; i<k; i++){
        cin>>a[i];
    }

    vector<double> x(n);
    vector<double> y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    
    double ans=0;
    for(int j=0; j<n; j++){
        double len=10000000000;
        for(int i=0; i<k; i++){
            int l=a[i]-1;
            len=min(len,sqrt((x[j]-x[l])*(x[j]-x[l])+(y[j]-y[l])*(y[j]-y[l])));
            //cout<<sqrt((x[j]-x[l])*(x[j]-x[l])+(y[j]-y[l])*(y[j]-y[l]))<<endl;
            //cout<<len<<endl;
        }
        //cout<<ans<<" "<<len<<endl;
        ans=max(ans,len);
    }
    printf("%.06f",ans);
}
