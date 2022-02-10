#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    vector<pair<long long,long long>> cheese(n);
    for(int i=0; i<n; i++){
        cin>>cheese[i].first>>cheese[i].second;
    }

    sort(cheese.rbegin(),cheese.rend());
    int i=0;
    long long ans=0;
    while(w>0 && i<n){
        ans+=cheese[i].first*cheese[i].second;
        w-=cheese[i].second;
        //cout<<w<<endl;
        if(w<0){
            ans+=cheese[i].first*w;
            break;
        }
        i+=1;

    }
    cout<<ans<<endl;
    
}