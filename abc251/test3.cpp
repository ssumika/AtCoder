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

int main(){
    int n,w;
    cin>>n;
    vector<string> s(n);
    vector<int> t(n);
    map<string,int> p;

    int count=0;
    int ans=0;
    int index=0;
    for(int i=0; i<n; i++){
        cin>>s[i]>>t[i];
        p[s[i]]=t[i];
        if(count!=p.size()){
            if(ans<t[i]){
                ans=t[i];
                index=i;
            }
        }
        count=p.size();
    }
    cout<<index+1<<endl;
}
