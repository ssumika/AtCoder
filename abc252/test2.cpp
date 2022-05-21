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
#define ll long long

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(k);
    int like=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        like=max(like,a[i]);
    }

    for(int i=0; i<k; i++){
        cin>>b[i];
    }

    vector<int> c;
    for(int i=0; i<n; i++){
        if(like==a[i]){
            c.push_back(i+1);
        }
    }

    for(int i=0; i<c.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(c[i]==b[j]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

}
