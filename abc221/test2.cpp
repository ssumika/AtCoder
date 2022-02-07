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
    int n=s.size();
    vector<int> index;
    for(int i=0; i<n; i++){
        if(s[i]!=t[i]){
            index.push_back(i);
        }
    }

    bool flg=false;
    if(index.size()==0){
        flg=true;
    }else if(index.size()==2){
        if(index[1]==index[0]+1){
            if(s[index[0]]==t[index[1]] && s[index[1]]==t[index[0]]){
                flg=true;
            }
        }
    }
    if(flg==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}