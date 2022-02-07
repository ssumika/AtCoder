#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string t;
    cin>>t;

    string ans="";
    for(int i=0; i<t.size(); i++){
        if(t[i]=='1'){
            ans+=s1;
        }else if(t[i]=='2'){
            ans+=s2;
        }else{
            ans+=s3;
        }
    }

    cout<<ans<<endl;
}
