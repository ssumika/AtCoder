#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
 
int main(){
    int m,h;
    cin>>m>>h;
    if(h%m==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}