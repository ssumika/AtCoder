#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int a[n];
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<p){
            ans++;
        }
    }
    cout<<ans<<endl;

}