#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
    }

    sort(c.begin(),c.end());

    long long a=1;
    for(int i=0; i<n; i++){
        a=(a*(c[i]-i))%1000000007;
        //cout<<a<<endl;
    }
    cout<<a%1000000007<<endl;
}
