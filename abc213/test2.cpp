#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    cout<<a[n-2].second<<endl;
}
