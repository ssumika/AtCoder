#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    long long v[n],p[n];
    for(int i=0; i<n; i++){
        cin>>v[i]>>p[i];
    }

    long long sum=0;
    int i=0;
    for(i=0; i<n; i++){
        sum+=v[i]*p[i];
        //cout<<sum<<endl;
        if(sum>x*100){
            break;
        }
    }
    if(i!=n){
        cout<<i+1<<endl;
    }else{
        cout<<-1<<endl;
    }
    
}