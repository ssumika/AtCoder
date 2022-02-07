#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> x(n);
    vector<long long> y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                //cout<<x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i]<<endl;
                if(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i]!=0){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
