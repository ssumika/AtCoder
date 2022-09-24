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

long long gcd(long long x,long long y){
    long long tmp;
    if(x<y){
        tmp=x;
        x=y;
        y=tmp;
    }
    while(y>0){
        tmp=y;
        y=x%y;
        x=tmp;
    }
    return x;
}


int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    set<pair<int,int>> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i==j){
                continue;
            }
            int dx=x[i]-x[j];
            int dy=y[i]-y[j];
            if(dx==0 || dy==0){
                if(dx==0){
                    ans.insert({0,1});
                    ans.insert({0,-1});
                }else{
                    ans.insert({1,0});
                    ans.insert({-1,0});
                }
            }else{
                //cout<<dx/gcd(dx,dy)<<" "<<dy/gcd(dx,dy)<<endl;
                ans.insert({dx/gcd(dx,dy),dy/gcd(dx,dy)});
                ans.insert({-dx/gcd(dx,dy),-dy/gcd(dx,dy)});
            }
        }
    }
    cout<<ans.size()<<endl;
}
