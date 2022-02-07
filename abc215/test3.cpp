#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    string s;
    int k;
    cin>>s>>k;
    int num=1;
    sort(s.begin(),s.end());
    do{
        if(num==k){
            cout<<s<<endl;
            return 0;
        }
        num++;
    }while(next_permutation(s.begin(),s.end()));

}
