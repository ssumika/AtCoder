#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,q,upper;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    a[n]=2000000001;
    cin>>q;
    int b[q];
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    
    std::sort(a,a+n+1);
    for(int i=0; i<q; i++){
        upper=lower_bound(a,a+n+1,b[i])-a;
        if(upper>0){
            if(abs(b[i]-a[upper])<abs(b[i]-a[upper-1])){
                cout<<abs(b[i]-a[upper])<<endl;
            }else{
                cout<<abs(b[i]-a[upper-1])<<endl;
            }
        }else{
            cout<<abs(b[i]-a[upper])<<endl;
        }
    }
    
   return 0;

}