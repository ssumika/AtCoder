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
    vector<vector<bool>> G(n,vector<bool>(n,false));
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        G[u][v]=true;
        G[v][u]=true;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(G[i][j]==true && G[j][k]==true && G[k][i]==true){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
