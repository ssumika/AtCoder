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
    int n,a,b;
    cin>>n>>a>>b;
    vector<vector<char>> v(n*b,vector<char>(n*a,'.'));
    for(int i=0; i<n*b; i++){
        for(int j=0; j<n*a; j++){
            if(((i/b)+(j/a))%2==1){
                v[i][j]='#';
            }
        }
    }

    for(int i=0; i<n*a; i++){
        for(int j=0; j<n*b; j++){
            cout<<v[j][i];
        }
        cout<<endl;
    }
}
