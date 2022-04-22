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

#define mod 998244353

using Graph=vector<vector<int>>;
vector<bool> seen;

//seenはassign(n,false)等で初期化,Graph G(n)
int dfs(const Graph &G,int v,int s){
    if(v==s && seen[s]) return 0;
    seen[v]=true;
    int dist=-10000;
    for(auto next_v:G[v]){
        if(next_v!=s && seen[next_v]) continue;
        int d=dfs(G,next_v,s);
        dist=max(dist,d+1);
    }
    seen[v]=false;
    return dist;
}


int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> c(h,vector<char>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>c[i][j];
        }
    }

    Graph G(h*w);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(c[i][j]=='.'){
                if(i-1>=0 && c[i-1][j]=='.'){
                    G[i*w+j].push_back((i-1)*w+j);
                }
                if(j-1>=0 && c[i][j-1]=='.'){
                    G[i*w+j].push_back(i*w+j-1);
                }
                if(i+1<h && c[i+1][j]=='.'){
                    G[i*w+j].push_back((i+1)*w+j);
                }
                if(j+1<w && c[i][j+1]=='.'){
                    G[i*w+j].push_back(i*w+j+1);
                }
            }
        }
    }
/*
    for(int i=0; i<h*w; i++){
        cout<<i<<":";
        for(int j=0; j<G[i].size(); j++){
            cout<<G[i][j];
        }
        cout<<endl;
    }
*/  
    seen.assign(h*w,false);
    int ans=-1;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            int s=i*w+j;
            int dist=dfs(G,s,s);
            ans=max(ans,dist);
        }
    }
    if(ans<=2){
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
   
}
