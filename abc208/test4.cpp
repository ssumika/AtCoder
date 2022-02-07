#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

using Graph=vector<vector<int>>;
vector<int> seen;
vector<bool> see;
int n,m;
int minute;
int ans=0;
int time[400][400];

/*
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
*/

//seenはassign(n,false)等で初期化,Graph G(n)
void dfs(const Graph &G,int s,int g,int k){
    see[s]=true;
    for(auto next_s:G[s]){
        if(s==g){ 
            seen.push_back(minute);
            minute=0;
        }
        if(see[s]||next_s>=k){ 
            continue;
        }
        minute+=time[s][next_s];
        cout<<minute<<endl;
        dfs(G,next_s,g,k);
    }
    sort(seen.begin(),seen.end());
    ans+=seen[0];

}


int main(){
    cin>>n>>m;
    Graph G(m);
    int a[m],b[m],c[m];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            time[i][j]=0;
        }
    }

    for(int i=0; i<m; i++){
        cin>>a[i]>>b[i]>>c[i];
        G[a[i-1]].push_back(b[i]-1);
        time[a[i]-1][b[i]-1]=c[i];
    }

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                see.assign(n,false);
                minute=0;
                dfs(G,i,j,k);
            }
        }
    }
    //cout<<"!"<<endl;
    cout<<ans<<endl;
}