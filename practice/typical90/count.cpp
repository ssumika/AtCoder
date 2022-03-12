#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
 
using namespace std;
long long mod=1000000007;
 
int main(){
    string l,r;
    cin>>l>>r;
    long long sum_count=0;
    long long r_num=stoll(r);
    long long num=9;
    long long t=1;

    for(int i=0; i<r.size(); i++){
        sum_count=(sum_count+(t*r_num)%mod);
        t+=1;
        r_num-=num;
        num=num*10+9;
    }

    long long count=0;
    long long l_num=stoll(l);
    num=9;
    t=1;
    for(int i=0; i<l.size(); i++){
        count+=(count+(t*l_num)%mod);
        t+=1;
        l_num-=num;
        num=num*10+9;
    }

    cout<<(sum_count-count+mod)%mod<<endl;
    
    return 0;
}