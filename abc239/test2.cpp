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
    long long x;
    cin>>x;
    if(x>=0){
        cout<<x/10<<endl;
    }else if(x<0 && x%10!=0){
        cout<<x/10-1<<endl;
    }else if(x<0 && x%10==0){
        cout<<x/10<<endl;
    }
}