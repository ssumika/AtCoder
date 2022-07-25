#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    string s;
    cin>>s;
    string card="";
    vector<vector<int>> sets(4);
    vector<string> cards;
    string ans="";
    bool flg=true;
    for(int i=0; i<s.size(); i++){
        if(flg==false){
            break;
        }
        card+=s[i];
        if((( 0<=s[i]-'0' && s[i]-'0'<=9 ) && ( s[i+1]-'0'<0 || s[i+1]-'0'>9 ) ) || s[i]=='A' || s[i]=='J' || s[i]=='Q' || s[i]=='K'){
            int num;
            if(s[i]=='0'){
                num=10;
            }else if(s[i]=='A'){
                num=1;
            }
            else if(s[i]=='J'){
                num=11;
            }
            else if(s[i]=='Q'){
                num=12;
            }
            else if(s[i]=='K'){
                num=13;
            }else{
                num=s[i]-'0';
            }

            int m;
            if(card[0]=='S'){
                m=0;
            }else if(card[0]=='H'){
                m=1;
            }
            else if(card[0]=='D'){
                m=2;
            }else{
                m=3;
            }
            if(num>=10 || num==1){
                sets[m].push_back(num);
                //cout<<m<<" "<<num<<endl;
            }
            cards.push_back(card);
            
            if(sets[m].size()==5){
                //cout<<cards.size()<<endl;
                for(int j=0; j<cards.size(); j++){
                    if(cards[j][0]!=card[0] || ( cards[j][cards[j].size()-1]!='J' && cards[j][cards[j].size()-1]!='Q' && cards[j][cards[j].size()-1]!='K' && cards[j][cards[j].size()-1]!='A' && cards[j][cards[j].size()-1]!='0' ) ){
                        ans+=cards[j];
                        //cout<<cards[j][0]<<" "<<cards[j][cards.size()-1]<<endl;
                    }
                }
                flg=false;
            }
            //cout<<card<<endl;
            card="";
        }
    }
    if(ans.size()>0){
        cout<<ans<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
