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
    int n;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    bool flg=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((a[i][j]=='W' && (a[j][i]=='W'||a[j][i]=='D')) || (a[i][j]=='L' && (a[j][i]=='L'||a[j][i]=='D')) || (a[i][j]=='D' && (a[j][i]=='W'||a[j][i]=='L'))){
                flg=false;
                break;
            }
        }
    }
    if(flg==true){
        cout<<"correct"<<endl;
    }else{
        cout<<"incorrect"<<endl;
    }

}
