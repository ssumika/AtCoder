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
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    vector<string> s(n);
    vector<int> d(n);
    for(int i=0; i<n; i++){
        int dis;
        cin>>s[i]>>d[i];
        if(d[i]<a){
            dis=a;
        }else if(d[i]<=b){
            dis=d[i];
        }else{
            dis=b;
        }

        if(s[i]=="West"){
            dis*=-1;
        }
        ans+=dis;
    }
    if(ans==0){
        cout<<ans<<endl;
    }else if(ans<0){
        cout<<"West"<<" "<<abs(ans)<<endl;
    }else{
        cout<<"East"<<" "<<abs(ans)<<endl;
    }
}
