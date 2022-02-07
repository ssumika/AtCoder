#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n+1);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.rbegin(),a.rend());
    a[n]=0;

    long long count=0;
    long long score=0;

    for(int i=0; i<n; i++){
        long long diff=a[i]-a[i+1];
        if((i+1)*diff+count<=k){
            score+=(i+1)*diff*(a[i]+a[i+1]+1)/2;
            count+=(i+1)*diff;
        }else{
            diff=(k-count)/(i+1);
            score+=(diff*(a[i]+a[i]-diff+1)/2)*(i+1);
            count+=diff*(i+1);
            score+=(a[i]-diff)*(k-count);
            break;
        }
    }

    cout<<score<<endl;

}
