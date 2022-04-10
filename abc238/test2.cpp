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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<bool> pizza(360,false);

    int p=0;
    pizza[p]=true;
    for(int i=0; i<n; i++){
        cin>>a[i];
        p+=a[i];
        p%=360;
        pizza[p]=true;
    }

    int res=0,cur=0;
    for(int i=0; i<=360 ;i++){
        if(pizza[i%360]){
            res=max(res,cur);
            cur=0;
        }
        cur++;
    }
    cout<<res<<endl;
}
