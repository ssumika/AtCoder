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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> x(m);
    vector<vector<bool>> f(n,vector<bool>(n,false));
    for(int i=0; i<n; i++){
        f[i][i]=true;
    }
    for(int i=0; i<m; i++){
        int k;
        cin>>k;
        x[i].resize(k);
        for(int j=0; j<k; j++){
            cin>>x[i][j];
        }
        for(int j=0; j<k; j++){
            for(int j1=j+1; j1<k; j1++){
                f[x[i][j]-1][x[i][j1]-1]=true;
                f[x[i][j1]-1][x[i][j]-1]=true;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(f[i][j]==false){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}
