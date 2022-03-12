#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    vector<int> coins;
    coins.push_back(a);
    coins.push_back(b);
    coins.push_back(c);
    
    sort(coins.begin(),coins.end(),greater<int>() );

    int min=1000000001;
    int ans;
    for(int i=0; i<=n/coins[0]; i++){
        for(int j=0; j<=(n-(i*coins[0]))/coins[1]; j++){
            if((n-(i*coins[0]+j*coins[1]))%coins[2]==0){
                ans=i+j+((n-(i*coins[0]+j*coins[1]))/coins[2]);
                if(ans<min){
                    min=ans;
                }
            }
        }
    }
    cout<<min<<endl;
    return 0;
}