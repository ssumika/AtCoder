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
    int n;
    cin>>n;
    vector<bool> num(2*n+2,true);
    while(1){
        for(int i=1; i<=2*n+1; i++){
            if(num[i]){
                cout<<i<<endl;
                num[i]=false;
                break;
            }
        }
        int k;
        cin>>k;
        if(k==0) break;
        num[k]=false;
    }
    return 0;
}
