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


int main(){
    int a,b,c,d,e;
    set<int> s;
    cin>>a>>b>>c>>d>>e;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    s.insert(e);
    cout<<s.size()<<endl;
}
