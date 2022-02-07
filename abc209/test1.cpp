#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<b-a+1<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
