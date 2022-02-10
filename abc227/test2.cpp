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
    int s[n];
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int a=1; a<=250; a++){
        for(int b=1; b<=333; b++){
            if(4*a*b+3*a+3*b<=1000){
                ans.push_back(4*a*b+3*a+3*b);
            }
        }
    }
    int num=0;
    for(int j=0; j<n; j++){
        bool flg=true;
        for(int i=0; i<ans.size(); i++){
            if(s[j]==ans[i]){
                flg=false;
                break;
            }
        }
        if(flg==true){
            num++;
        }
    }
    cout<<num<<endl;
}
