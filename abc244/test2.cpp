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

#define mod 998244353
#define ll long long

int main(){
    int n;
    cin>>n;
    string t;
    cin>>t;
    int x=0,y=0;
    int p=0;
    for(int i=0; i<t.size(); i++){
        if(t[i]=='S'){
            if(p==0){
                x++;
            }else if(p==1){
                y--;
            }else if(p==2){
                x--;
            }else{
                y++;
            }
        }else{
            p=(p+1)%4;
        }
    }
    cout<<x<<" "<<y<<endl;
}
