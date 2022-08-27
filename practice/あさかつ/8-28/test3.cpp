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

vector<pair<char,int>> runLength(string s){
    vector<pair<char,int>> p;
    char mark=s[0];
    int count=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]!=mark){
            p.push_back({mark,count});
            mark=s[i];
            count=1;
        }else{
            count++;
        }
    }
    p.push_back({mark,count});
    return p;
}


int main(){
    string s;
    cin>>s;
    vector<pair<char,int>> p;
    p=runLength(s);
    int p_size=p.size();
    for(int i=0; i<p_size; i++){
        cout<<p[i].first<<p[i].second;
    }
    cout<<endl;
}