#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int b[n][m];
    int lx,ly,rx,ry;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
        }
    }
    lx=(b[0][0]+6)/7;
    ly=b[0][0]%7;
    if(ly==0){
        ly=7;
    }
    rx=lx+n-1;
    ry=ly+m-1;
    if(ry>7){
        cout<<"No"<<endl;
        return 0;
    }
    //cout<<lx<<" "<<ly<<" "<<rx<<" "<<ry<<endl;
    bool flg=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //cout<<b[i][j]<<" "<<i<<" "<<j<<endl;
            if(b[i][j]!=(i+lx-1)*7+(j+ly)){
                flg=false;
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    if(flg==true){
        cout<<"Yes"<<endl;
        return 0;
    }
}
