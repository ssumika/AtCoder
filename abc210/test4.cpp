#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int h,w,c;
    cin>>h>>w>>c;
    long long a[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>a[i][j];
        }
    }

    long long ans=10000000000000;
    for(int i=0; i<h*w-1; i++){
        for(int j=i+1; j<h*w; j++){
            long long cost;
            int x_i=i%h;
            int y_i=i/h;
            int x_j=j%h;
            int y_j=j/h;
            cost=a[x_i][y_i]+a[x_j][y_j]+c*(abs(x_i-x_j)+abs(y_i-y_j));
            if(ans>cost){
                ans=cost;
            }
        }
    }
    cout<<ans<<endl;
}
