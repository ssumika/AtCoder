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
using ll=long long;

#define mod 998244353

bool compare_second(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
    int n;
    cin>>n;
    map<string,int> m;

    int ans=0;
    int index;
    int count=0;
    for(int i=0; i<n; i++){
        string s;
        int t;
        cin>>s>>t;
        m[s]=t;
        if(m.size()!=count){
            if(ans<t){
                ans=t;
                index=i+1;
            }
        }
        count=m.size();
    }
    cout<<index<<endl;
}