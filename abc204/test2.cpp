#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
            cin>>a[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]<=10){
            continue;
        }else{
            count+=a[i]-10;
        }
    }
    cout<<count<<endl;
}
