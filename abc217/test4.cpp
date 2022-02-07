#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
 
using namespace std;
 
int main(){
    int l,q;
    cin>>l>>q;
    vector<int> c(q);
    vector<int> x(q);
    for(int i=0; i<q; i++){
        cin>>c[i]>>x[i];
    }
 
    set<int> cut;
    vector<int> ans;
    cut.insert(0);
    cut.insert(l);
    for(int i=0; i<q; i++){
        if(c[i]==2){
            auto it=cut.lower_bound(x[i]);
            ans.push_back(*it-*prev(it));
        }else{
            cut.insert(x[i]);
        }
    }
 
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
 
    
}