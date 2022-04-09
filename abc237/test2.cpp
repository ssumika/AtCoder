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

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<vector<int>> b(w,vector<int>(h));

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>a[i][j];
            b[j][i]=a[i][j];
        }
    }

    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
}
