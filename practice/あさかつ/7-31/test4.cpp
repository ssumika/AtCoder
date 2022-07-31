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
using ll=long long;
 
#define mod 998244353
 
int main() {
    int N;
    cin >> N;
    vector<int> R(N);
    for(int i=0; i<N; i++){
        cin>>R[i];
    }
    R.erase(unique(R.begin(), R.end()), R.end());
    N = R.size();
 
    if (N < 3) {
        cout << 0 << endl;
        return 0;
    }
 
    int ans = 2;
    for (int i = 1; i < (int)R.size() - 1; i++) {
        int a = R[i - 1], b = R[i], c = R[i + 1];
        if (b < a && b < c || b > a && b > c) ans++;
    }
 
    cout << (ans < 3 ? 0 : ans) << endl;
    return 0;
}