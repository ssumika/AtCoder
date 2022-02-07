#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x;
    }else{
        cout<<3-(x+y);
    }
}
