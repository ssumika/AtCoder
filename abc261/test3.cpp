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
    map<string,int> m;
    vector<string> s(n);
    vector<string> ans;
    for(int i=0; i<n; i++){
        cin>>s[i];
        m[s[i]]++;
        if(m[s[i]]==1){
            ans.push_back(s[i]);
        }else{
            string a=s[i]+"("+to_string(m[s[i]]-1)+")";
            ans.push_back(a);
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
}
