//参考:https://atcoder.jp/contests/abc274/submissions/35945134
#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int N, x, y;
    cin >> N >> x >> y;
    vector<int> A1, A2;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i % 2 == 0) {
            A1.push_back(A);
        } else {
            A2.push_back(A);
        }
    }

    set<int> dp1 = {A1[0]};
    for (int i = 1; i < A1.size(); i++) {
        set<int> s;
        for (auto x : dp1) {
            s.insert(x + A1[i]);
            s.insert(x - A1[i]);
        }
        dp1 = s;
    }

    set<int> dp2 = {0};
    for (int i = 0; i < A2.size(); i++) {
        set<int> s;
        for (auto x : dp2) {
            s.insert(x + A2[i]);
            s.insert(x - A2[i]);
        }
        dp2 = s;
    }

    if (dp1.find(x) != dp1.end() && dp2.find(y) != dp2.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}