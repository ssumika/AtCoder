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

int main(){
    int n,m;
    cin>>n>>m;
    vector<long long> a(n);
    vector<long long> b(m);
    vector<bool> t(n,true);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int i=0; i<m ;i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(t[j]==true && a[j]==b[i]){
                t[j]=false;
                count+=1;
                break;
            }
        }
        if(count==0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}