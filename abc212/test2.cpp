#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    char x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    //cout<<int(x1)+1;
    if(x1==x2 && x2==x3 && x3==x4){
        cout<<"Weak"<<endl;
    }else if(int(x2-'0')==(int(x1-'0')+1)%10 && int(x3-'0')==(int(x2-'0')+1)%10 && int(x4-'0')==(int(x3-'0')+1)%10){
        cout<<"Weak"<<endl;
    }else{
        cout<<"Strong"<<endl;
    }
}
