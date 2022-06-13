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

struct Edge {
    long long to;
    long long cost;

    Edge(long long to, long long cost) : to(to), cost(cost) {}
};
using Graph = vector<vector<Edge>>;
using P = pair<long long, int>;
const long long INF = 1LL << 60;
/* dijkstra(G,s,dis)
    入力：グラフ G, 開始点 s, 距離を格納する dis
    計算量：O(|E|log|V|)
    副作用：dis が書き換えられる
*/

void dijkstra(const Graph &G, int s, vector<long long> &dis) {
    int N = G.size();
    dis.resize(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq;  // 「仮の最短距離, 頂点」が小さい順に並ぶ
    dis[s] = 0;
    pq.emplace(dis[s], s);
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (dis[v] < p.first) {  // 最短距離で無ければ無視
            continue;
        }
        for (auto &e : G[v]) {
            if (dis[e.to] > dis[v] + e.cost) {  // 最短距離候補なら priority_queue に追加
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    Graph G(n);
    for(int i=0; i<m; i++){
        long long a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        
        G[a].emplace_back(b,c);
        G[b].emplace_back(a,c);
        
    }

    for(int i=0; i<1; i++){
        vector<long long> dis;
        dijkstra(G,0,dis);
        int ans=dis[i];
        dijkstra(G,n-1,dis);
        ans+=dis[i];

        cout<<ans<<endl;
    }
    
}
