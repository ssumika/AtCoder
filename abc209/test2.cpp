#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(x>=sum-n/2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
