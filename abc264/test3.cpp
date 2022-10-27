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
    int h1,w1;
    cin>>h1>>w1;
    vector<vector<int>> a(h1,vector<int>(w1));
    for(int i=0; i<h1; i++){
        for(int j=0; j<w1; j++){
            cin>>a[i][j];
        }
    }

    int h2,w2;
    cin>>h2>>w2;
    vector<vector<int>> b(h2,vector<int>(w2));
    for(int i=0; i<h2; i++){
        for(int j=0; j<w2; j++){
            cin>>b[i][j];
        }
    }
    
    
    for(int i=0; i<(1<<h1); i++){
        for(int j=0; j<(1<<w1); j++){
            vector<int> h;
            vector<int> w;
            for(int k=0; k<h1; k++){
                if(i&(1<<k)){
                    h.push_back(k);
                }
            }
            for(int k=0; k<w1; k++){
                if(j&(1<<k)){
                    w.push_back(k);
                }
            }
            
            if(h.size()!=h2 || w.size()!=w2){
                continue;
            }
            bool flg=true;
            for(int k=0; k<h2; k++){
                for(int l=0; l<w2; l++){
                    if(a[h[k]][w[l]] != b[k][l]){
                        flg=false;
                    }
                }
            }
            if(flg){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}
