#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>

using namespace std;
using ll=long long;

#define mod 998244353

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> G(h+1,vector<char>(w+1));
    vector<vector<bool>> t(h+1,vector<bool>(w+1,false));
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin>>G[i][j];
        }
    }

    int i=1;
    int j=1;
    while(1){
        //cout<<i<<" "<<j<<endl;
        char s=G[i][j];
        if(t[i][j]==true){
            cout<<-1<<endl;
            return 0;
        }
        t[i][j]=true;
        if(s=='U'){
            i--;
            if(i==0){
                cout<<1<<" "<<j<<endl;
                return 0;
            }
            s=G[i][j];
        }else if(s=='D'){
            i++;
            if(i==h+1){
                cout<<h<<" "<<j<<endl;
                return 0;
            }
            s=G[i][j];
        }else if(s=='L'){
            j--;
            if(j==0){
                cout<<i<<" "<<1<<endl;
                return 0;
            }
            s=G[i][j];
        }else if(s=='R'){
            j++;
            if(j==w+1){
                cout<<i<<" "<<w<<endl;
                return 0;
            }
            s=G[i][j];
        }
    }
}
