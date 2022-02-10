#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans=0;
    for(long long a=1; a*a*a<=n; a++){
        for(long long b=a; a*b*b<=n; b++){
            ans+=floor(n/(a*b))-b+1;
        }
    }
    cout<<ans<<endl;
}
