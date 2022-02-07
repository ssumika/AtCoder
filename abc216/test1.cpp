#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string x;
    cin>>x;
    int a,b;
    if(x.size()==4){
        a=(int)(x[0]-'0')*10+(int)(x[1]-'0');
        b=(int)(x[x.size()-1]-'0');
    }else{
        a=(int)(x[0]-'0');
        b=(int)(x[x.size()-1]-'0');
    }

    if(b<=2){
        cout<<a<<"-"<<endl;
    }else if(b<=6){
        cout<<a<<endl;
    }else{
        cout<<a<<"+"<<endl;
    }
    
}
