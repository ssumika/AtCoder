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


int main(){
    int n;
    cin>>n;
    vector<int> a(4*n-1);
    vector<int> b(n,0);
    for(int i=0; i<4*n-1; i++){
        cin>>a[i];
    }
    for(int i=0; i<4*n-1; i++){
        b[a[i]-1]++;
    }
    for(int i=0; i<n; i++){
        if(b[i]!=4){
            cout<<i+1<<endl;
        }
    }
}
