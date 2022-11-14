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

int main() {
	int n;
	cin>>n;
	map<int,vector<int>> G;
	for (int i=0; i<n; i++) {
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
    
    queue<int> que;
	que.push(1);
	set<int> S;
	S.insert(1);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (int i : G[v]) {
			if (!S.count(i)) {
				que.push(i);
				S.insert(i);
			}
		}
	}
	cout << *S.rbegin() << '\n';
	
}