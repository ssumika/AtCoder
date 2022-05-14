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
#define ll long long

int main() {
  cout << "297" << endl;
  for (int i = 1; i <= 99; i++) {
    cout << i << " ";
    cout << i * 100 << " ";
    cout << i * 10000 << (i == 99 ? "\n" : " ");
  }
}