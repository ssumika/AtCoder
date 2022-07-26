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
#include<sstream>
#include<istream>
#include <ios>     // std::left, std::right
#include <iomanip> // std::setw(int), std::setfill(char)

using namespace std;
using ll=long long;

#define mod 998244353

int limit_day(int y,int m){
    int ld;
    if(m==2 && y%4==0){
        if(y%100==0 && y%400==0){
            ld=29;
        }else if(y%100==0){
            ld=28;
        }else{
            ld=29;
        }
    }else if(m==2){
        ld=28;
    }else if(m==4 || m==6 || m==9 ||m==11){
        ld=30;
    }else{
        ld=31;
    }
    return ld;
}


int main(){
    vector<std::string> v;
    string s;
    cin>>s;
    stringstream ss{s};
    string buf;
    while (std::getline(ss, buf, '/')) {
        v.push_back(buf);
    }
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    int y=stoi(v[0]);
    int m=stoi(v[1]);
    int d=stoi(v[2]);
    //cout<<y<<" "<<m<<" "<<d<<endl;
    int lm=12;
    int ld=limit_day(y,m);
    
    while(1){
        if(y%m==0 && (y/m)%d==0){
            //cout<<y/m<<endl;
            break;
        }
        d++;
        if(d>ld){
            d=1;
            m++;
            if(m>lm){
                m=1;
                y++;
            }
            ld=limit_day(y,m);
        }
    }
    cout<<y<<"/"<<setfill('0')<<right<<setw(2)<<m<<"/"<<setfill('0')<<right<<setw(2)<<d<<endl;

}
