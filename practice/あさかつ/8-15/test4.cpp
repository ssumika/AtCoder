#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<numeric>
 
using namespace std;
 
int main(){
    int k,t;
    cin>>k>>t;
    vector<int> a(t);
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    if(a.size()==1){
        cout<<a[0]-1<<endl;
        return 0;
    }else{
        int total=accumulate(a.begin(),a.end()-1,0);
        int peak=a.back();
        cout << max(peak-total-1,0) << endl;
    }
}