#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N,K,p;
    cin>>N>>K;
    vector<vector<long long>> x(N,vector<long long>(2));
    p=0;
    for(int i=0; i<N; i++){
        cin>>x[i][0]>>x[i][1];
    }

    std::sort(x.begin(),x.end());
    
    for(int i=0; i<N; i++){
        if(x[i][0]>K){
            break;
        }
        K+=x[i][1];
    }

    cout<<K;
}

    
    