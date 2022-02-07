#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int h,w,n;
    cin>>h>>w>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    vector<int> aset=a;
    vector<int> bset=b;

    sort(aset.begin(),aset.end());
    sort(bset.begin(),bset.end());
    aset.erase(unique(aset.begin(),aset.end()),aset.end());
    bset.erase(unique(bset.begin(),bset.end()),bset.end());

    for(int i=0; i<n; i++){
        a[i]=lower_bound(aset.begin(),aset.end(),a[i])-aset.begin();
        b[i]=lower_bound(bset.begin(),bset.end(),b[i])-bset.begin();
    }

    for(int i=0; i<n; i++){
        cout<<a[i]+1<<" "<<b[i]+1<<endl;
    }
}
