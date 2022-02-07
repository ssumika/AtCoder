#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<long long> a(n);
    vector<long long> low(n);
    vector<long long> k(q);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        low[i]=a[i]-(i+1);
    }
    
    for(int i=0; i<q; i++){
        cin>>k[i];
    }

    for(int i=0; i<q; i++){
        int index=lower_bound(low.begin(),low.end(),k[i])-low.begin();
        if(index==n){
            cout<<a[n-1]+(k[i]-low[n-1])<<endl;
        }else{
            cout<<(a[index]-1)-(low[index]-k[i])<<endl;
        }
    }

    


}