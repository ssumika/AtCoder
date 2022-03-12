#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n,q;
    string s;
    cin>>n>>s>>q;
    string s1=s.substr(0,n);
    string s2=s.substr(n);
    int t[q],a[q],b[q];

    for(int i=0; i<q; i++){
        cin>>t[i]>>a[i]>>b[i];

        if(t[i]==1){
            if(b[i]<=n){
                swap(s1[a[i]-1],s1[b[i]-1]);
            }else if(a[i]>n){
                swap(s2[a[i]-(n+1)],s2[b[i]-(n+1)]);
            }else{
                swap(s1[a[i]-1],s2[b[i]-(n+1)]);
            }
        }else{
            swap(s1,s2);
        }
    }
    cout<<s1<<s2<<endl;
}