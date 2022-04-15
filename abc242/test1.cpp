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

int main(){
    double a,b,c,x;
    cin>>a>>b>>c>>x;
    double ans;
    if(x<=a){
        ans=1;
    }else if(x<=b){
        ans=c/(b-a);
    }else{
        ans=0;
    }
    printf("%.9f",ans);
    
}
