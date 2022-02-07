#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<queue>
 
using namespace std;
 
int main(){
    int q;
    cin>>q;
    priority_queue<long long,vector<long long>,greater<long long>> box;
    vector<long long> ans;
    long long quary;
    long long x;
    long long count=0;
    for(int i=0; i<q; i++){
        cin>>quary;
        if(quary!=3){
            cin>>x;
            if(quary==1){
                box.push(x-count);
            }else{
                count+=x;
            }
        }else{
            ans.push_back(box.top()+count);
            box.pop();
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}