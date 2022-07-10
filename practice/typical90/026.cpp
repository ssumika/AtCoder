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

using Graph=vector<vector<int>>;
vector<bool> seen;
vector<int> color;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        color[next_v]=color[v]*(-1);
        dfs(G,next_v);
    }
}


int main(){
    int n;
    cin>>n;
    Graph G(n);
    for(int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    seen.assign(n,false);
    color.assign(n,0);

    color[0]=1;
    dfs(G,0);
    int count=0;

    int num=accumulate(color.begin(),color.end(),0)>0 ? 1 : -1;

    for(int i=0; i<n; i++){
        if(color[i]==num && count<n/2){
            cout<<i+1<<" ";
            count++;
        }
    }
    cout<<endl;

}