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
    int h,w;
    cin>>h>>w;
    vector<string> s(h);
    vector<pair<int,int>> p;
    for(int i=0; i<h; i++){
        cin>>s[i];
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j]=='o') p.push_back({i,j});
        }
    }
    cout<<abs(p[0].first-p[1].first)+abs(p[0].second-p[1].second)<<endl;
}
