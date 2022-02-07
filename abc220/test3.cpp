#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
 
using namespace std;
 
int main(){
    long long n,x;
    cin>>n;
    vector<long long>a(n);
    long long a_sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        a_sum+=a[i];
    }
    cin>>x;
    long long k,sum=0;
    k=x/a_sum;
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(sum>x-a_sum*k){
            k=k*n+(long long)(i+1);
            cout<<k<<endl;
            return 0;
        }
    }
}