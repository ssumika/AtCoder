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

/*
(step 1) 長さ 2,3 の棒がどちらもひとつ以上あるならば、それらを接着して長さ 5 の棒を作る。このことを、可能な限り繰り返す。

(step 2) 長さ 3 の棒が 1 つ以上、長さ 1 の棒が 2 つ以上存在するとき、それらを接着して長さ 5 の棒を作る。このことを、可能な限り繰り返す。

(step 3) 長さ 2 の棒が 2 つ以上、長さ 1 の棒が 1 つ以上存在するとき、それらを接着して長さ 5 の棒を作る。このことを、可能な限り繰り返す。

(step 4) 長さ 2 の棒が 1 つ以上、長さ 1 の棒が 3 つ以上存在するとき、それらを接着して長さ 5 の棒を作る。このことを、可能な限り繰り返す。

(step 5) 長さ 1 の棒が 5 つ以上存在するとき、それらを接着して長さ 5 の棒を作る。このことを、可能な限り繰り返す。
*/
int main(){
  ll T;
  cin >> T;
  for(int i=0; i<T; i++){
    ll ans = 0;
    ll two, three, four;
    cin >> two >> three >> four;
    three /= 2;
    ll tmp = min(three, four);
    ans += tmp;
    three -= tmp;
    four -= tmp;
    tmp = min(three, two / 2);
    ans += tmp;
    three -= tmp;
    two -= tmp * 2;
    tmp = min(four / 2, two);
    ans += tmp;
    four -= tmp * 2;
    two -= tmp;
    tmp = min(four, two / 3);
    ans += tmp;
    four -= tmp;
    two -= tmp * 3;
    tmp = two / 5;
    ans += tmp;
    cout << ans << endl;
  }
  return 0;
}