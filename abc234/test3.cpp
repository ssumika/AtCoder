#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<bitset>

using namespace std;

string toBinary(long long n)
{
    string r;
    while (n != 0){
        if(n%2==0){
            r+='0';
        }else{
            r+='1';
        }
        n/=2;
    }
    return r;
}


int main(){
    long long k;
    cin>>k;
    string s=toBinary(k);
    string ans;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]-'0'==0){
            ans+="0";
        }else{
            ans+="2";
        }
    }
    std::cout<<ans<<endl;
}

