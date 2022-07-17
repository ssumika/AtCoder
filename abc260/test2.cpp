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

bool compare_second(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first > b.first;
    }else{
        return a.second < b.second;
    }
}


int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<int> a(n);
    vector<int> b(n);
    vector<bool> index(n,true);
    vector<int> ans;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    vector<pair<int,int>> f;
    for(int i=0; i<n; i++){
        f.push_back({a[i],i});
    }

    sort(f.begin(),f.end(),compare_second);

    for(int i=0; i<x; i++){
        ans.push_back(f[i].second);
        index[f[i].second]=false;
    }

    //cout<<ans.size()<<endl;

    
    vector<pair<int,int>> s;
    for(int i=0; i<n; i++){
        s.push_back({b[i],i});
    }
    sort(s.begin(),s.end(),compare_second);
    
    int count=0;
    int i=0;
    //cout<<count<<" "<<y<<endl;
    while(1){
        if(count==y){
            break;
        }else{
            //if(i==n) break;
            //cout<<count<<endl;
            if(index[s[i].second]==true){
                ans.push_back(s[i].second);
                index[s[i].second]=false;
                count++;
            }
            i++;
        }
        //if(i==n) cout<<i<<endl;
    }

    vector<pair<int,int>> t;
    for(int i=0; i<n; i++){
        t.push_back({a[i]+b[i],i});
        //cout<<i<<endl;
    }

    sort(t.begin(),t.end(),compare_second);
    
    count=0;
    i=0;
    //cout<<count<<" "<<z<<endl;
    while(1){
        if(count==z){
            break;
        }else{
            //if(i==n) break;
            //cout<<t[i].first<<endl;
            if(index[t[i].second]==true){
                //cout<<t[i].second<<endl;
                ans.push_back(t[i].second);
                index[t[i].second]=false;
                count++;
            }
            i++;
        }
    }

    //cout<<ans.size()<<endl;

    sort(ans.begin(),ans.end());
    //cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]+1<<endl;
    }
}