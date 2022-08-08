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
    int n,m;
    cin>>n>>m;

    vector<int> red(n,0);
    vector<int> ball(n,1);
    red[0]=1;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(ball[x]==1){
            red[y]|=red[x];
            red[x]=0;
        }else{
            red[y]|=red[x];
        }
        ball[x]--;
        ball[y]++;
    }
    cout<<accumulate(red.begin(),red.end(),0)<<endl;
}