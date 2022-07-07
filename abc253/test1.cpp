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


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a<=b && b<=c) || (c<=b && b<=a)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
