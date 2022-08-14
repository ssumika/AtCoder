#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
 
using namespace std;
using ll=long long;
 
#define mod 998244353
 
int main(){
    vector<int> num(4);
    //int a,b,c,d;
    string st;
    int number;
    cin>>number;
    
    int c=0;
    while(c<4){
        num[3-c]=number%10;
        number/=10;
        c++;
    }
    //cout<<"!"<<endl;
    for(int i=0; i<7; i++){
        if(i==0){
            st+=(char)num[0]+'0';
        }else if(i==2){
            st+=(char)num[1]+'0';
        }else if(i==4){
            st+=(char)num[2]+'0';
        }else if(i==6){
            st+=(char)num[3]+'0';
        }else{
           st+='z';
        }
    }
    st+="=7";
    //cout<<st<<endl;
    
    
    int s;
    for(int bit=0; bit<(1<<3); bit++){
        int ans=num[0];
        for(int i=0; i<3; i++){
            if(bit&(1<<i)){
                ans+=num[i+1];
            }else{
                ans-=num[i+1];
            }
        }
        if(ans==7){
            int b=bit;
            for(int i=0; i<3; i++){
                if(b%2){
                    st[i*2+1]='+';
                }else{
                    st[i*2+1]='-';
                }
                b/=2;
            }
            break;
        }
    }
    cout<<st<<endl;
    
}