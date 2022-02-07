#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

bool compare_third(tuple<string,int, int> a, tuple<string,int, int> b) {
    if(get<2>(a)!= get<2>(b)){
        return get<2>(a) > get<2>(b);
    }else{
        return get<1>(a) < get<1>(b);
    }
}

int vs(string x,string y,int k){
    //cout<<x[k]<<" "<<y[k]<<" "<<k<<endl;
    if(x[k]=='C' && y[k]=='G'){
        return -1;
    }else if(x[k]=='G' && y[k]=='C'){
        return 1;
    }else if(x[k]=='C' && y[k]=='P'){
        return 1;
    }else if(x[k]=='P' && y[k]=='C'){
        return -1;
    }else if(x[k]=='G' && y[k]=='P'){
        return -1;
    }else if(x[k]=='P' && y[k]=='G'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    string a[2*n];
    for(int i=0; i<2*n; i++){
            cin>>a[i];
    }
    vector<tuple<string,int,int>> win;
    for(int i=0; i<2*n; i++){
        //cout<<a[i]<<" "<<i<<endl;
        win.push_back(make_tuple(a[i],i,0));
    }
    for(int i=0; i<m; i++){
        for(int k=0; k<n; k++){
            int vic=vs(get<0>(win[2*k]),get<0>(win[2*k+1]),i);
            if(vic==1){
                get<2>(win[2*k])++;
            }else if(vic==-1){
                get<2>(win[2*k+1])++;
            }
        }
        sort(win.begin(),win.end(),compare_third);
        /*
        for(int i=0; i<2*n; i++){
            cout<<get<2>(win[i])+1<<endl;
        }
        */
    }
    
    for(int i=0; i<2*n; i++){
        cout<<get<1>(win[i])+1<<endl;
    }
    
}