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
    vector<vector<int>> ans(n,vector<int>(n));
    int num=1;
    for(int i=1; i<n*n; i+=2){
        ans[i%n][i/n]=num;
        num++;
    }
    for(int i=0; i<n*n; i+=2){
        ans[i%n][i/n]=num;
        num++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
