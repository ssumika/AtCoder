#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string n;
    cin>>n;
    string ans="";
    for(int i=0; i<4-n.size(); i++){
        ans+="0";
    }
    cout<<ans+n<<endl;
}
