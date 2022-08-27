#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>

using namespace std;
using ll=long long;

#define mod 998244353


int main(){
    int n;
    cin>>n;
    vector<pair<double,double>> t(n);
    for(int i=0; i<n; i++){
        cin>>t[i].first>>t[i].second;
    }
 
    sort(t.begin(),t.end());
    for(int i=0; i<n; i++){
        double x0=t[i].first;
        double y0=t[i].second;
        for(int j=i+1; j<n; j++){
            double x1=t[j].first;
            double y1=t[j].second;
            for(int k=j+1; k<n; k++){
                double x2=t[k].first;
                double y2=t[k].second;
 
                if(((y1-y0)/(x1-x0))==((y2-y1)/(x2-x1))){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
        
    }
 
    cout<<"No"<<endl;
 
}