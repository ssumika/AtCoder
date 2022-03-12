#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
#include<map>
 
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    map<int,int> map;
    for(int i=0; i<n; i++){
        cin>>a[i];
        map[a[i]]++;
    }

    long long ans=0;
    int box=k;
    while(box>0){
        for(int i=0; i<n; i++){
            if(map[i]<box){
                ans+=i*(box-map[i]);
                box=map[i];
            }
        }
    }
    cout<<ans<<endl;
    
}