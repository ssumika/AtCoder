#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    if(n>a){
        cout<<a*x+(n-a)*y<<endl;
    }else{
        cout<<n*x<<endl;;
    }
    
}
