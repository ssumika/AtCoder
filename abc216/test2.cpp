#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> name;
    for(int i=0; i<n; i++){
        string s,t;
        cin>>s>>t;
        for(int j=0; j<name.size(); j++){
            if(name[j]==s+"1"+t){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        name.push_back(s+"1"+t);
    }
    cout<<"No"<<endl;
}
