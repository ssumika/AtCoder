#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    if(string(s)<string(t)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
