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

bool compare_second(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> d(m+1);
    d[0]=0;
    for(int i=1; i<=m; i++){
        cin>>d[i];
    }

    vector<int> ans(n);
    vector<int> index(n+1);
    index[0]=-1;
    for(int i=0; i<n; i++){
        ans[i]=i+1;
        index[i+1]=i;
    }

    int lost=d[0];
    for(int i=1; i<=m; i++){
        if(index[d[i]]!=-1){
            ans[index[d[i]]]=lost;
            index[lost]=index[d[i]];
            index[d[i]]=-1;
            lost=d[i];
        }
        /*
        for(int j=0; j<n; j++){
            cout<<ans[j];
        }
        cout<<endl;
        */
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}