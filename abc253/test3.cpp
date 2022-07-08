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
using ll=long long;

#define mod 998244353


int main(){
    int Q;
    cin>>Q;
    multiset<int> s;
    vector<int> ans;
    for(int i=0; i<Q; i++){
        int q;
        int x;
        int c;
        cin>>q;
        if(q==1){
            cin>>x;
            s.insert(x);
        }else if(q==2){
            cin>>x>>c;
            while(c>0 && s.find(x)!=s.end()){
                s.erase(s.find(x));
                c--;
            }
        }else{
            ans.push_back(*s.rbegin()-*s.begin());
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}
