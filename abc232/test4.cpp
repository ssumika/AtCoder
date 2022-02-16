#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<queue>

using namespace std;

//returnはvector<int>型
using Graph=vector<vector<int>>;
vector<bool> seen;
//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const Graph &G,int v){
    seen[v]=true;
    for(auto next_v:G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
}

//returnはvector<int>型
auto bfs(const Graph &G,int s,int n){
    queue<int> que;
    vector<int> dist(n,-1);
    que.push(s);
    dist[s]=1;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto& nv:G[v]){
            if(dist[nv]!=-1) continue;
            que.push(nv);
            dist[nv]=dist[v]+1;
            }
        }
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
/*
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
*/


    Graph G(h*w);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(j<w-1 && c[i][j+1]=='.'){
                //cout<<i*h+j<<" "<<i*h+j+1<<endl;
                G[i*w+j].push_back(i*w+j+1);
            }
            if(i<h-1 && c[i+1][j]=='.'){
                //cout<<i*h+j<<" "<<i*h+j+1<<endl;
                G[i*w+j].push_back((i+1)*w+j);
            }
        }
    }
/*
    for(int i=0; i<h*w; i++){
        cout<<i<<":";
        for(int j=0; j<G[i].size(); j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    vector<int> dis=bfs(G,0,h*w);
    int ans=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(ans<dis[i*w+j]){
                ans=dis[i*w+j];
            }
        }
    }

    cout<<ans<<endl;
    

}
