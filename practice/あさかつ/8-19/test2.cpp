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
    string s;
    map<char,int> m;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++){
        m[s[i]]++;
    }
    cout<<m['A']<<" ";
    cout<<m['B']<<" ";
    cout<<m['C']<<" ";
    cout<<m['D']<<" ";
    cout<<m['E']<<" ";
    cout<<m['F']<<endl;
 
}