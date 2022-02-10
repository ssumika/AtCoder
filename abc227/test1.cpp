#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,k,a;
    cin>>n>>k>>a;
    int ans=a;
    while(k>1){
        k--;
        ans++;
        if(ans==n+1){
            ans=1;
        }
    }
    cout<<ans<<endl;
}
