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
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    vector<int> q(n);
    for(int i=0; i<n; i++){
        int index=p[i]-1;
        q[index]=i+1;
    }

    for(int i=0; i<n; i++){
        cout<<q[i]<<" ";
    }
}
