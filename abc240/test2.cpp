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
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> ans;
    for(int i=0; i<n; i++){
        cin>>a[i];
        ans.insert(a[i]);
    }
    cout<<ans.size()<<endl;
    
}
