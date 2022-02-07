#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==0 && b>0){
        cout<<"Silver"<<endl;
    }else if(b==0 && a>0){
        cout<<"Gold"<<endl;
    }else if(a>0 && b>0){
        cout<<"Alloy"<<endl;
    }
    
}
