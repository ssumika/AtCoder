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

#define mod 998244353
#define ll long long

int main(){
	char s1,s2,s3,t1,t2,t3;
	cin>>s1>>s2>>s3>>t1>>t2>>t3;
    int ans=0;

	if(s1==t1) ans++;
	if(s2==t2) ans++;
	if(s3==t3) ans++;

	if(ans==1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;;
    }
	return 0;
}
