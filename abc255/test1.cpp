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
    int r,c;
    cin>>r>>c;
    vector<vector<int>> a(2,vector<int>(2));
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    cout<<a[r-1][c-1]<<endl;
}
