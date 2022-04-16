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

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> c(n+m+1);
    for(int i=0; i<n+1; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n+m+1; i++){
        cin>>c[i];
    }

    vector<int> b(m+1);
    int index=0;
    while(1){
        if(index==m+1){
            break;
        }
        b[index]=c[(c.size()-1)-index]/a[(a.size()-1)];
        //cout<<c[(c.size()-1)-index]<<" "<<a[(a.size()-1)]<<endl;
        //cout<<b[index]<<endl;
        for(int j=0; j<=n; j++){
            c[c.size()-(index+j)-1]-=b[index]*a[a.size()-j-1];
        }
        index++;
    }
    reverse(b.begin(),b.end());
    for(int i=0; i<=m; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}