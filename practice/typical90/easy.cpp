#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>

using namespace std;


int main(){
    long long n,m;
    cin>>n>>m;
    vector<vector<int>> G(n);
    int a[m],b[m];
    for(int i=0; i<m; i++){
        cin>>a[i]>>b[i];
        if(a[i]>b[i]){
            G[a[i]-1].push_back(b[i]-1);
        }else{
            G[b[i]-1].push_back(a[i]-1);
        }
    }

    int count=0;
    for(int i=n-1; i>=1;i--){
        if(G[i].size()==1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}