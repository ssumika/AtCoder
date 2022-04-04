#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.size();
    vector<int> cnt(n+1,0);
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            cnt[i+1]=cnt[i]+1;
        }else{
            cnt[i+1]=cnt[i];
        }
        //cout<<cnt[i+1]<<endl;
    }
/*
    for(int i=0; i<n; i++){
        cout<<cnt[i];
    }
    cout<<endl;
*/   
    int ans=0;
    int r=0;
    for(int l=0; l<n ;l++){
        while(r<n && cnt[r+1]-cnt[l]<=k){
            r++;
        }
        ans=max(r-l,ans);
        //cout<<"l:"<<l<<","<<"r:"<<r<<","<<ans<<endl;
    }
    cout<<ans<<endl;


    
}