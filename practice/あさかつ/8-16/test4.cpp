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
    int n;
    cin>>n;
    int c=n;
    vector<int> ng(3);
    for(int i=0; i<3; i++){
        cin>>ng[i];
    }

    bool flg=true;
    int count=0;

    while(n>0){
        count++;
        if(find(ng.begin(),ng.end(),n-3)==ng.end()){
            n-=3;
        }else if(find(ng.begin(),ng.end(),n-2)==ng.end()){
            n-=2;
        }else if(find(ng.begin(),ng.end(),n-1)==ng.end()){
            n-=1;
        }else{
            flg=false;
            break;
        }
    }
    if(count>100 || flg==false || find(ng.begin(),ng.end(),c)!=ng.end()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}