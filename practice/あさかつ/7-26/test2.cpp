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
    vector<int> a(n);
    int count=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        while(1){
            if(a[i]%2==0 || a[i]%3==2){
                count++;
                a[i]--;
            }else{
                break;
            }
        }
    }
    cout<<count<<endl;
}