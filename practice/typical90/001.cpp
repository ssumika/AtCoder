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
using ll=long long;

int l;

bool solve(vector<int> sum,int m,int k){
    int cnt=0;
    int index=0;
    //cout<<"m:"<<m<<endl;
    for(int i=1; i<sum.size(); i++){
        if(sum[i]-sum[index]>=m && l-sum[i]>=m){
            //cout<<sum[i]-sum[index]<<endl;
            index=i;
            cnt++;
        }
    }
    
    if(cnt>=k){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n,k;
    cin>>n>>l;
    cin>>k;
    vector<int> a(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int left=-1;
    int right=l+1;
    while(right-left>1){
        int mid=(left+right)/2;
        if(solve(a,mid,k)){
            left=mid;
        }else{
            right=mid;
        }
    }
    cout<<left<<endl;
}
