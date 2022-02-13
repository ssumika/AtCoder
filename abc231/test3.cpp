#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    vector<int> x(q);
    for(int i=0; i<q; i++){
        cin>>x[i];
    }

    for(int i=0; i<q; i++){
        cout<<a.end()-lower_bound(a.begin(),a.end(),x[i])<<endl;
    }
}
