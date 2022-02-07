#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    string s[4];
    map<string,int> set;
    for(int i=0; i<4; i++){
        cin>>s[i];
        set[s[i]]++;
    }
    if(set.size()==4){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}
