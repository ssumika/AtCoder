#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<queue>

using namespace std;

using Graph=vector<vector<int>>;

void swap(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
//returnはvector<int>型
auto bfs(const Graph &G,vector<int> p,int s,int n){
    queue<int> que;
    vector<int> dist(n,-1);
    que.push(s);
    dist[s]=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto& nv:G[v]){
            swap(p[v],p[nv]);
            que.push(nv);
            dist[nv]=dist[v]+1;
        }
            int count=0;
            for(int i=0; i<8; i++){
                if(p[i]==i+1){
                    count++;
            }
        }
            if(count==8){
                 return dist;
        }
    }
}

int main(){
    int m;
    cin>>m;
    Graph G(m);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        G[u-1].push_back(v-1);
        G[v-1].push_back(u-1);
    }

    vector<int> p(9,0);
    for(int i=0; i<8; i++){
        int num;
        cin>>num;
        p[num-1]=i;
    }

    int s;
    for(int i=0; i<9; i++){
        if(p[i]==0){
            s=i;
            break;
        }
    }

    vector<int> dist;
    dist=bfs(G,p,s,9);
    int ans=0;
    for(int i=0; i<8; i++){
        if(dist[i]>ans){
            ans=dist[i];
        }
    }
    cout<<ans<<endl;
    
}
