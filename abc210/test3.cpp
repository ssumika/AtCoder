#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long c[n];
    vector<long long> candy;
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    map<long long,long long> color;
    for(int i=0; i<k; i++){
        color[c[i]]++;
    }
    long long ans=color.size();
    
    for(int i=0; i<n-k; i++){
        color[c[i]]--;
        color[c[i+k]]++;
        if(color[c[i]]==0){
            color.erase(c[i]);
        }
        long long s=color.size();
        ans=max(ans,s);
    }
    cout<<ans<<endl;

}
