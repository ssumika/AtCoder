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
    int n;
    cin>>n;
    vector<string> s(n);
    vector<vector<int>> slot(10);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }


    int ans=1000000000;
    for(int num=0; num<10; num++){
        vector<bool> flg(n,true);
        int count=0;
        int stop=0;
        for(int j=0; j<=n*10; j++){
            for(int i=0; i<n; i++){
                if(flg[i]==true && s[i][j%10]==num+'0'){
                    count=j;
                    //cout<<count<<":"<<i<<endl;
                    stop++;
                    flg[i]=false;
                    break;
                }
            }
            if(stop==n){
                ans=min(count,ans);
                break;
            }
        }
    }
    cout<<ans<<endl;

}
