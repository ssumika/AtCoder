#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
    double r,x,y;
    cin>>r>>x>>y;
    double dis=sqrt(x*x+y*y);
    if(dis<r){
        cout<<"2"<<endl;
    }else{
        cout<<ceil(dis/r)<<endl;
    }
}