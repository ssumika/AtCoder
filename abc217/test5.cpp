#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<queue>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> q(n);
    queue<int> a;
    priority_queue<int,vector<int>,greater<int>> b;
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>q[i];
        if(q[i]==1){
            int x;
            cin>>x;
            a.push(x);
        }else if(q[i]==2){
            if(b.empty()){
                ans.push_back(a.front());
                a.pop();
            }else{
                ans.push_back(b.top());
                b.pop();
            }
        }else{
            int s=a.size();
            for(int i=0; i<s; i++){
                b.push(a.front());
                a.pop();
            }
        }
    }
 
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
 
}