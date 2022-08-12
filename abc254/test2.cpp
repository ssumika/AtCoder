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
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0; i<n; i++){
        a[i].resize(i+1);
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
