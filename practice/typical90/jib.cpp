#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int ans=100000000,sum;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum=a[i]+b[j];
            }else{
                sum=max(a[i],b[j]);
            }
            if(sum<ans){
                ans=sum;
            }
        }
    }
    cout<<ans<<endl;
}