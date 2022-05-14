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
#define ll long long

int main(){
    ll n,w;
    cin>>n>>w;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n==1){
        if(a[0]<=w){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }

        return 0;
    }else if(n==2){
        int count=0;
        if(a[0]<=w){
            count++;
        }
        if(a[1]<=w){
            count++;
        }
        if(a[0]+a[1]<=w){
            count++;
        }
        cout<<count<<endl;
        return 0;
    }

    vector<bool> num(w+1,false);
    ll ans=0;
    for(int i=0; i<a.size(); i++){
        for(int j=i; j<a.size(); j++){
            for(int k=j; k<a.size(); k++){
                vector<ll> nums;
                if(i==j || j==k || i==k){
                    continue;
                }else{
                    if(a[i]<=w){
                        nums.push_back(a[i]);
                    }
                    if(a[j]<=w){
                        nums.push_back(a[j]);
                    }
                    if(a[k]<=w){
                        nums.push_back(a[k]);
                    }
                    if(a[i]+a[j]<=w){
                        nums.push_back(a[i]+a[j]);
                    }
                    if(a[k]+a[j]<=w){
                        nums.push_back(a[j]+a[k]);
                    }
                    if(a[i]+a[k]<=w){
                        nums.push_back(a[k]+a[i]);
                    }
                    if(a[i]+a[j]+a[k]<=w){
                        nums.push_back(a[k]+a[i]+a[j]);
                    }
                    for(int l=0; l<nums.size(); l++){
                        if(num[nums[l]]==false){
                            ans++;
                            num[nums[l]]=true;
                            //cout<<nums[l]<<endl;
                        }
                    }
                }
                
            }
        }
    }
    cout<<ans<<endl;
}
