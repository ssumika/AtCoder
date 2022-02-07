#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<bitset>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    bitset<8> abit(a);
    bitset<8> bbit(b);
    bitset<8> cbit(0);
    //cout<<abit<<endl;
    //cout<<bbit<<endl;
    for(int i=0; i<8; i++){
        cbit[i]=abit[i]^bbit[i];
    }
    int c=0;
    for(int i=0; i<8; i++){
        c+=cbit[i]*pow(2,i);
    }
    cout<<c<<endl;
}
