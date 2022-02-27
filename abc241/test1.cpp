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
    vector<int> a(10);
    for(int i=0; i<10; i++){
        cin>>a[i];
    }

    int s=0;

    for(int i=0; i<3; i++){
        s=a[s];
    }
    cout<<s<<endl;
}