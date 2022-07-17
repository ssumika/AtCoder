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
    vector<string> s(n);
    vector<int> t(n);
    set<string> ss;
    vector<pair<int,int>> st;
    int count=0;
    for(int i=0; i<n; i++){
        cin>>s[i]>>t[i];
        ss.insert(s[i]);
        if(ss.size()!=count){
            st.push_back(make_pair(i+1,t[i]));
        }
        count=ss.size();
    }
    std::sort(st.begin(),st.end(),compare_second);
    std::cout<<st[0].first<<endl;
}