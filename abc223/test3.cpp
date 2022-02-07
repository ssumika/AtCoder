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
    double a[n],b[n];
    vector<double> sum(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    sum[0]=0;
    for(int i=0; i<n-1; i++){
        sum[i+1]=sum[i]+a[i];
    }

    vector<double> left(n+1);
    vector<double> right(n+1);
    left[0]=0;
    right[n]=0;
    for(int i=1; i<=n; i++){
        left[i]=left[i-1]+a[i-1]/b[i-1];
        //cout<<left[i]<<endl;
    }
    for(int i=n-1; i>=0; i--){
        right[i]=right[i+1]+a[i]/b[i];
        //cout<<right[i]<<endl;
    }
/*
    for(int i=0; i<=n; i++){
        cout<<left[i]<<" "<<right[i]<<endl;
    }
*/

    double ans;
    for(int i=0; i<n; i++){
        if(left[i+1]>=right[i+1]){
            double s;
            if(left[i]>=right[i+1]){
                //cout<<"!"<<endl;
                s=b[i]*(left[i]-right[i+1]);
                ans=sum[i]+((a[i]-s)/(2*b[i]))*b[i];
                break;
            }else{
                s=b[i]*(right[i+1]-left[i]);
                ans=sum[i]+s+((a[i]-s)/(2*b[i]))*b[i];
                break;
            }
        }
    }
    cout<<ans<<endl;
}
