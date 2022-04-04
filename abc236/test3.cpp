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


int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    vector<string> t(m);
    map<string,bool> st;
    for(int i=0; i<n; i++){
        cin>>s[i];
        st[s[i]]=true;
    }
    for(int i=0; i<m; i++){
        cin>>t[i];
        st[t[i]]=false;
    }

    for(int i=0; i<n; i++){
        if(st[s[i]]==true){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}
