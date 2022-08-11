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
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=0; i<=n; i++){
        int num=i;
        int c=0;
        while(num>0){
            c+=num%10;
            num/=10;
        }
        if(a<=c && c<=b){
            ans+=i;
        }
    }
    cout<<ans<<endl;
}