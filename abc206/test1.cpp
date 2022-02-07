#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(int(n*1.08)<206){
        cout<<"Yay!"<<endl;
    }else if(int(n*1.08)==206){
        cout<<"so-so"<<endl;
    }else{
        cout<<":("<<endl;
    }
}