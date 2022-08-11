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

int main(){
    string s;
    cin>>s;
    string t ="AKIHABARA";
    int n=s.size();
    for(int i=0; i<n-1; i++){
        if(s[i]=='A' && s[i+1]=='A'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    int j = 0;
    for(int i=0; i<n; i++){
        if(s[i]==t[j]){
            j++;
            continue;
        }
        if(t[j]=='A'){
            j++;
        }
        if(s[i]!=t[j]){
            cout<<"NO"<<endl;
            return 0;
        }
        j++;
    }
    if(j<8){
        cout<<"NO"<<endl;
        return 0;
    }else{
        cout<<"YES"<<endl;
    }
}