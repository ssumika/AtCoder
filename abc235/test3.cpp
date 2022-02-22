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
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    map<int,vector<int>> num;
    for(int i=0; i<n; i++){
        cin>>a[i];
        num[a[i]].push_back(i+1);
    }

    vector<int> ans;

    for(int i=0; i<q; i++){
        int x,k;
        cin>>x>>k;
        
        if(num[x].size()<k){
            ans.push_back(-1);
        }else{
            ans.push_back(num[x][k-1]);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }

}