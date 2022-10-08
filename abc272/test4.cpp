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
using Graph=vector<vector<int>>;


//returnはvector<int>型
auto bfs(const Graph &G,int s,int n){
    queue<int> que;
    vector<int> dist(n,-1);
    que.push(s);
    dist[s]=0;
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
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> p;
    int a=0;
    while(1){
        int b=m-a*a;
        if(a>sqrt(b)){
            break;
        }
        if(sqrt(b)==int(sqrt(b))){
            p.push_back({a,sqrt(b)});
            p.push_back({sqrt(b),a});
        }
        a++;
    }
    /*
    for(int i=0; i<p.size(); i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;;
    }
    */
   Graph G(n*n);
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        for(int k=0; k<p.size(); k++){
            int x=p[k].first;
            int y=p[k].second;
            if(i+x<n && j+y<n){
                G[i*n+j].push_back((i+x)*n+(j+y));
                G[(i+x)*n+(j+y)].push_back(i*n+j);
            }
            if(i-x>=0 && j-y>=0){
                G[i*n+j].push_back((i-x)*n+(j-y));
                G[(i-x)*n+(j-y)].push_back(i*n+j);
            }
            if(i-x>=0 && j+y<n){
                G[i*n+j].push_back((i-x)*n+(j+y));
                G[(i-x)*n+(j+y)].push_back(i*n+j);
            }
            if(i+x<n && j-y>=0){
                G[i*n+j].push_back((i+x)*n+(j-y));
                G[(i+x)*n+(j-y)].push_back(i*n+j);
            }
        }
    }
   }
   vector<int> dist=bfs(G,0,n*n);
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<dist[i*n+j]<<" ";
    }
    cout<<endl;
   }
}
