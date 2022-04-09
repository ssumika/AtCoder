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
    long long n;
    cin>>n;
    if(n>=pow(-2,31) && n<pow(2,31)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
