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
#include<deque>

using namespace std;

#define mod 998244353
#define ll long long

string toBinary(ll n)
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
    reverse(r.begin(),r.end());
    return r;
}

int main(){
    int n;
    cin>>n;
    ll x;
    cin>>x;
    string s;
    cin>>s;
    string answer=toBinary(x);
    deque<char> ans;
    for(int i=0; i<answer.size(); i++){
        ans.push_back(answer[i]);
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]=='U'){
            //cout<<ans.size()<<endl;
            ans.pop_back();
        }else if(s[i]=='L'){
            ans.push_back('0');
        }else{
            ans.push_back('1');
        }
    }
    string num="";
    for(int i=0; i<ans.size(); i++){
        num+=ans[i];
    }
    //cout<<num<<endl;
    ll number=stoll(num,nullptr,2);
    cout<<number<<endl;
}