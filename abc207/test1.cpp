#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    vector<int> a(3);
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<a[1]+a[2]<<endl;
}
