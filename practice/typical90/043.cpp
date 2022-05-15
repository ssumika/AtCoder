#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<stack>

using namespace std;

#define ll long long
#define mod 100000

struct state{
    int x,y,dir;
};

int main() {
    int h,w;
    cin>>h>>w;
    int rs,cs,rt,ct;
    cin>>rs>>cs>>rt>>ct;
    rs--;
    cs--;
    rt--;
    ct--;

    vector<vector<char>> s(h,vector<char>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>s[i][j];
        }
    }

    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    int dist[h][w][4];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            for(int k=0; k<4; k++){
                dist[i][j][k]=100000000;
            }
        }
    }

    deque<state> deq;
    for(int i=0; i<4; i++){
        dist[rs][cs][i]=0;
        deq.push_back({rs,cs,i});
    }

    while(!deq.empty()){
        state p=deq.front();
        deq.pop_front();
        for(int i=0; i<4; i++){
            int nx=p.x+dx[i];
            int ny=p.y+dy[i];
            int cost=dist[p.x][p.y][p.dir]+(p.dir!=i?1:0);
            if(nx>=0 && nx<h && ny>=0 && ny<w){
                if(s[nx][ny]=='.' && cost<dist[nx][ny][i]){
                    dist[nx][ny][i]=cost;
                    if(p.dir!=i){
                        deq.push_back({nx,ny,i});
                    }else{
                        deq.push_front({nx,ny,i});
                    }
                }
            }
        }
    }

    int ans=10000000;
    for(int i=0; i<4; i++){
        ans=min(ans,dist[rt][ct][i]);
    }
    cout<<ans<<endl;
}