#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long boll=n;
    string s="";
    while(boll>0){
        if(boll%2==0){
            s+="B";
            boll/=2;
        }else{
            s+="A";
            boll--;
        }
    }
    string ans(s.rbegin(),s.rend());
    cout<<ans<<endl;
}
