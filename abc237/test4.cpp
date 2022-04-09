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
    string s;
    cin>>s;
    deque<int> a={n};

    for(int i=n-1; i>=0; i--){
        if(s[i]=='L'){
            a.push_back(i);
        }else{
            a.push_front(i);
        }

    }

    for(int i=0; i<n+1; i++){
        cout<<a[i]<<" ";
    }
}
