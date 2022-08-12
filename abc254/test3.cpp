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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<vector<int>> b(k);
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i%k].push_back(a[i]);
    }

    sort(a.begin(),a.end());
    for(int i=0; i<k; i++){
        sort(b[i].rbegin(),b[i].rend());
    }
/*
    for(int i=0; i<k; i++){
        for(int j=0; j<b[i].size(); j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    vector<int> c;
    for(int i=0; i<n; i++){
        int p=b[i%k].back();
        //cout<<p<<endl;
        c.push_back(p);
        b[i%k].pop_back();
    }

    for(int i=0; i<n; i++){
        //cout<<a[i]<<" "<<c[i]<<endl;
        if(a[i]!=c[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
