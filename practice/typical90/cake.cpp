#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n];
    long long c_sum=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        c_sum+=a[i];
    }

    if(c_sum%10!=0){
        cout<<"No"<<endl;
        return 0;
    }
    long long sum[2*n]={0};
    sum[0]=a[0];
    for(long long i=1; i<2*n; i++){
        sum[i]=sum[i-1]+a[i%n];
    }
    for(long long i=0; i<n; i++){
        long long goal=sum[i]+sum[n-1]/10;
        long long p=lower_bound(sum,sum+2*n,goal)-sum;
        if(sum[p]==goal){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}