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
    int t;
    cin>>t;
    vector<string> ans;
    for(int i=0; i<t; i++){
        long long a,s;
        cin>>a>>s;
        if(s-a>=0 && ((s-a)&a)==a){
            ans.push_back("Yes");
        }else{
            ans.push_back("No");
        }
    }
    for(int i=0; i<t; i++){
        cout<<ans[i]<<endl;
    }
}
