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
void swap(char *x,char *y){
    char tmp=*x;
    *x=*y;
    *y=tmp;
}

int main(){
    string s;
    cin>>s;
    int a,b;
    cin>>a>>b;
    swap(s[a-1],s[b-1]);
    cout<<s<<endl;
}
