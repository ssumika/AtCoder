#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    set<pair<int,int>> p;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                //cout<<i<<":"<<j<<endl;
                int px=x[j]-x[i];
                int py=y[j]-y[i];
                int t=abs(__gcd(px,py));
                //cout<<t<<endl;
                //cout<<px/t<<" "<<py/t<<endl;
                p.insert(make_pair(px/t,py/t));
            }
        }
    }

    cout<<p.size()<<endl;
}
