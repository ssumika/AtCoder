#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> shift;
    shift.push_back(s);
    for(int i=0; i<s.size(); i++){
        string t="";
        for(int j=1; j<s.size(); j++){
            t+=s[j];
        }
        t+=s[0];
        s=t;
        shift.push_back(t);
    }
    sort(shift.begin(),shift.end());
    cout<<shift[0]<<endl;
    cout<<shift[s.size()]<<endl;
}
