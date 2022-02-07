#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
using Graph=vector<vector<int>>;
vector<bool> seen;
 
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
}
 
int main(){
    int n,m;
    cin>>n>>m;
    int a[m],b[m];
    Graph G(n);
    for(int i=0; i<m; i++){
        cin>>a[i]>>b[i];
    }
 
    for(int i=0; i<m; i++){
        G[a[i]-1].push_back(b[i]-1);
    }
 
    
    int count=0;
    for(int i=0; i<n; i++){
        seen.assign(n,false);
        dfs(G,i);
        for(int j=0; j<n; j++){
            if(seen[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}