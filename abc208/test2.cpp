#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int p;
    cin>>p;
    vector<int> coins(10);
    coins[0]=1;
    for(int i=1; i<10; i++){
        coins[i]=coins[i-1]*(i+1);
        //cout<<coins[i]<<endl;
    }

    int count=0;
    int j=9;
    while(1){
        count+=min(100,p/coins[j]);
        p-=coins[j]*min(100,p/coins[j]);
        j--;
        if(p==0){
            cout<<count<<endl;
            return 0;
        }
    }
    
}
