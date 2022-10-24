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
    int h,w;
    cin>>h>>w;
    vector<vector<char>> c(h,vector<char>(w));
    vector<int> x(w,0);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>c[i][j];
            if(c[i][j]=='#'){
                x[j]++;
            }
        }
    }

    for(int i=0; i<w; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
