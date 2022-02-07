#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long ans=1000000001;
    long long mini=10000000001;
    for(int i=0; i<n; i++){
        int find=a[i];
        int left=0;
        int right=m-1;
        while(right-left>1){
            int mid=(left+right)/2;
            if(b[mid]>=find){
                right=mid;
            }else{
                left=mid;
            }
        }
        //cout<<find<<" "<<b[left]<<" "<<b[right]<<endl;
        ans=min(abs(find-b[left]),abs(find-b[right]));
        if(ans<mini){
            mini=ans;
        }
    }
    cout<<mini<<endl;
}
