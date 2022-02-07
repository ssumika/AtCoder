#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            if(i%2==0){
                cout<<"Takahashi"<<endl;
                break;
            }else{
                cout<<"Aoki"<<endl;
                break;
            }
        }
    }
    
}