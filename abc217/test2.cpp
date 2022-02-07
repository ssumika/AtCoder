#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s,t,u;
    cin>>s>>t>>u;
    map<string,int> con;
    con["ABC"]=0;
    con["ARC"]=0;
    con["AGC"]=0;
    con["AHC"]=0;
    con[s]++;
    con[t]++;
    con[u]++;
    if(con["ABC"]==0){
        cout<<"ABC"<<endl;
    }
    if(con["ARC"]==0){
        cout<<"ARC"<<endl;
    }
    if(con["AGC"]==0){
        cout<<"AGC"<<endl;
    }
    if(con["AHC"]==0){
        cout<<"AHC"<<endl;
    }
    
}
