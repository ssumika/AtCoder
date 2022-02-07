#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c*d-b<=0){
        cout<<"-1"<<endl;
    }else{
        cout<<ceil(a/(c*d-b))<<endl;
    }
    
}
