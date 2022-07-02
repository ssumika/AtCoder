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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int count=0;
    vector<char> ans;
    for(int i=0; i<q; i++){
        int j,x;
        cin>>j>>x;
        if(j==1){
            count+=x;
            count%=n;
        }else{
            if(x-count-1>=0){
                //cout<<s[x-count-1]<<endl;
                ans.push_back(s[x-count-1]);
            }else{
                //cout<<s[x-count-1+n]<<endl;
                ans.push_back(s[x-count-1+n]);
            }
        } 
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }

}
