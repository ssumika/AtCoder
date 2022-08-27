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
    vector<int> h(3);
    vector<int> w(3);
    for(int i=0; i<3; i++){
        cin>>h[i];
    }
    for(int i=0; i<3; i++){
        cin>>w[i];
    }

    int ans=0;
    for(int a11=1; a11<h[0]; a11++){
        for(int a12=1; a11+a12<h[0]; a12++){
            int a13=h[0]-(a11+a12);
            for(int a21=1; a21<h[1]; a21++){
                for(int a22=1; a21+a22<h[1]; a22++){
                    int a23=h[1]-(a21+a22);
                    for(int a31=1; a31<h[2]; a31++){
                        for(int a32=1; a31+a32<h[2]; a32++){
                            int a33=h[2]-(a31+a32);
                            if(a11+a21+a31==w[0] && a12+a22+a32==w[1] && a13+a23+a33==w[2]){
                                    ans++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    
}
