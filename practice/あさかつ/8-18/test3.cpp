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

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    unordered_set<string> ans;
    /*
    if(s.size()<k){
        cout<<"0"<<endl;
        return 0;
    }
    */
    int n=s.size();
    for(int i=0; i<=n-k; i++){
        string st;
        for(int j=0; j<k; j++){
            st+=s[i+j];
        }
        ans.insert(st);
    }
    cout<<ans.size()<<endl;
}