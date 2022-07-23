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
    vector<int> lx(n);
    vector<int> ly(n);
    vector<int> rx(n);
    vector<int> ry(n);
    for(int i=0; i<n; i++){
        cin>>lx[i]>>ly[i]>>rx[i]>>ry[i];
    }
    vector<vector<int>> cnt(1001,vector<int>(1001,0));
    for(int i=0; i<n; i++){
        cnt[lx[i]][ly[i]]++;
        cnt[rx[i]][ry[i]]++;
        cnt[lx[i]][ry[i]]--;
        cnt[rx[i]][ly[i]]--;
    }

    vector<int> a(n+1);
    for(int i=1; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            cnt[i][j]+=cnt[i-1][j];
        }
    }

    for(int i=0; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            cnt[i][j]+=cnt[i][j-1];
        }
    }

    for(int i=0; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            if(cnt[i][j]>=1){
                a[cnt[i][j]]++;
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        cout<<a[i]<<endl;
    }

}