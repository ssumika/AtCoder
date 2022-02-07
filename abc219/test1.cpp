#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int x;
    cin>>x;
    if(x<40){
        cout<<40-x<<endl;
    }else if(x<70){
        cout<<70-x<<endl;
    }else if(x<90){
        cout<<90-x<<endl;
    }else{
        cout<<"expert"<<endl;
    }
    
}
