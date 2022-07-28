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
    string w;
    map<char,int> a;
    cin>>w;
    for(int i=0; i<w.size(); i++){
        a[w[i]]++;
    }

    for(int i=0; i<w.size(); i++){
        if(a[w[i]]%2!=0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}