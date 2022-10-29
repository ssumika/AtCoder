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
    int n;
    cin>>n;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }

    int index=1;
    int ans=h[0];
    for(int i=0; i<n; i++){
        if(ans<h[i]){
            ans=h[i];
            index=i+1;
        }
    }
    cout<<index<<endl;
}
