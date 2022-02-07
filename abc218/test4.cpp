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
    vector<pair<long long,long long>> p(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
        p[i].first=x[i];
        p[i].second=y[i];
    }

    sort(p.begin(),p.end());
    /*
    for(int i=0; i<n; i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    */
    
    

    long long ans=0;

    for(int i=0; i<n; i++){
        bool x_flg=false;
        bool y_flg=false;
        long long x=p[i].first;
        long long y=p[i].second;
        vector<long long> x_plus;
        vector<long long> y_plus;
    
        for(int j=i+1; j<n; j++){
            if(p[i].first==p[j].first){
                x_flg=true;
                y_plus.push_back(p[j].second-p[i].second);
            }else if(p[i].second==p[j].second){
                y_flg=true;
                x_plus.push_back(p[j].first-p[i].first);
            }else if(x_flg==true && y_flg==true){
               for(auto x:x_plus){
                   for(auto y:y_plus){
                       if(p[j].first==x+p[i].first && p[j].second==y+p[i].second){
                            ans++;
                       }
                   }
               }
            }
        }
    }

    cout<<ans<<endl;
}