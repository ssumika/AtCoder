#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>

using namespace std;

#define mod 998244353

int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    vector<tuple<int,int,char>> t;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }

    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        t.emplace_back(y[i],x[i],s[i]);
    }
    sort(t.begin(),t.end());
/*
    for(int i=0; i<n; i++){
        cout<<get<1>(t[i])<<get<0>(t[i])<<get<2>(t[i])<<endl;
    }
*/  
   int p=get<0>(t[0]);
   bool next=true;
   int left=-1;
   int right=1000000001;
   for(int i=0; i<n; i++){
        if(p!=get<0>(t[i])){
           next=false;
           p=get<0>(t[i]);
           left=-1;
           right=1000000001;
        }

        if(get<2>(t[i])=='R' && right>get<1>(t[i])){
            right=get<1>(t[i]);
        }else if(get<2>(t[i])=='L' && left<get<1>(t[i])){
            left=get<1>(t[i]);
        }

        if(next==true){
            if(right<left){
                //cout<<left<<" "<<right<<endl;
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        next=true;
    }
    cout<<"No"<<endl;
     
}