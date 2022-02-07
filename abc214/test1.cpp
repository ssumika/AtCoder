#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=125){
        cout<<4;
    }else if(n<=211){
        cout<<6;
    }else{
        cout<<8;
    }
}
