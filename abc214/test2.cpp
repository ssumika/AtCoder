#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int s,t;
    cin>>s>>t;
    int ans=0;
    for(int a=0; a<=100; a++){
        for(int b=0; b<=100; b++){
            for(int c=0; c<=100; c++){
                if(a*b*c<=t && a+b+c<=s){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
