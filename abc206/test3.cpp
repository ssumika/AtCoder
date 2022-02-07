#include<iostream>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long sum=0;
    long long max=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum++;
    }

    sort(a.begin(),a.end());
    long long ans=0;
    long long same=1;
    for(int i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            same++;
        }else{
            sum-=same;
            ans+=same*sum;
            same=1;
        }
    }

    cout<<ans<<endl;
}