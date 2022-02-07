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

    bool flg=true;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                flg=false;
                break;
            }
        }
    }
    if(flg==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}