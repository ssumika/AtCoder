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
    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0; i<n; i++){
        cin>>t[i]>>x[i]>>y[i];
    }
    bool flg=true;
    int pt=0;
    int px=0;
    int py=0;
    for(int i=0; i<n; i++){
        int time=t[i]-pt;
        if((abs(x[i]-px)+abs(y[i]-py))>t[i]-pt || time%2!=(abs(x[i]-px)+abs(y[i]-py))%2){
            flg=false;
            break;
        }
        pt=t[i];
        px=x[i];
        py=y[i];
    }
    string ans=flg?"Yes":"No";
    cout<<ans<<endl;
}
