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
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    int ans=x;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='x' && ans>0) ans--;
        else if(s[i]=='o') ans++;
    }
    cout<<ans<<endl;
    
}
