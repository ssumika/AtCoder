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
    int s[n],t[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        cin>>t[i];
    }

    vector<int> time(n,1000000001);
    time[0]=t[0];
    for(int i=0; i<2*n; i++){
        time[(i+1)%n]=min(time[i%n]+s[i%n],t[(i+1)%n]);
    }

    for(int i=0; i<n; i++){
        cout<<time[i]<<endl;
    }
}