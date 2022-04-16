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

int main(){
    int v,a,b,c;
    cin>>v>>a>>b>>c;
    int ans=v%(a+b+c);
    if(ans<a){
        cout<<"F"<<endl;
        return 0;
    }else if(ans<a+b){
        cout<<"M"<<endl;
        return 0;
    }else{
        cout<<"T"<<endl;
        return 0;
    }
}
