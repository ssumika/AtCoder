#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n],b[n];
    vector<pair<long long,int>> x;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        x.push_back(make_pair(a[i],1));
        x.push_back(make_pair(a[i]+b[i],-1));
    }

    sort(x.begin(),x.end());

    vector<int> login(n+1,0);
    int k=0;
    for(int i=0; i<x.size()-1; i++){
        //cout<<x[i].first<<" "<<x[i].second<<endl;
        k+=x[i].second;
        login[k]+=x[i+1].first-x[i].first;
    }

    for(int i=1; i<=n; i++){
        cout<<login[i]<<" ";
    }
    cout<<"\n";
}
