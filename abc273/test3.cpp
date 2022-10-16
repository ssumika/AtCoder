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
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    for(auto it=m.rbegin(); it!=m.rend(); it++){
        cout<<it->second<<endl;
    }
    
    for(int i=0; i<n-m.size(); i++){
        cout<<"0"<<endl;
    }
    
}
