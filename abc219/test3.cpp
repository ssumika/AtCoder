#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

string x;

bool compare_rule(string s1, string s2) {
    int l=min(s1.size(),s2.size());
    for(int i=0; i<l; i++){
        if(s1[i]!=s2[i]){
            int j=i;
            int xs1,xs2;
            for(int k=0; k<26; k++){
                if(s1[j]==x[k]){
                    xs1=k;
                }
                if(s2[j]==x[k]){
                    xs2=k;
                }
            }
            return xs1<xs2;
        }
    }
    return s1.size()<s2.size();
}

int main(){
    cin>>x;
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    sort(s.begin(),s.end(),compare_rule);

    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }
}
