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

#define mod 998244353
#define ll long long

int main(){
    string s;
    cin>>s;
    for(int i=0; i<6; i++){
        cout<<s[i%s.size()];
    }
    cout<<endl;
}
