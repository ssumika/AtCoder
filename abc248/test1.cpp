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

int main(){
    string s;
    cin>>s;
    vector<int> num(9);
    for(int i=0; i<10; i++){
        num[s[i]-'0']+=1;
    }
    for(int i=0; i<10; i++){
        if(num[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }
}