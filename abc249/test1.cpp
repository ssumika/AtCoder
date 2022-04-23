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
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    int ta=0;
    int ao=0;
    ta=b*(x/(a+c))*a+b*(min(a,x%(a+c)));
    ao=e*(x/(d+f))*d+e*(min(d,x%(d+f)));
    
    if(ta>ao){
        cout<<"Takahashi"<<endl;
    }else if(ta<ao){
        cout<<"Aoki"<<endl;
    }else{
        cout<<"Draw"<<endl;
    }
}
