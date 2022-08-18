#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>
#include<set>
#include<queue>
#include<numeric>

using namespace std;
using ll=long long;

#define mod 998244353

int main() {
	string s;
	cin>>s;
	int n = s.size();
	vector<int> a(n+1);
	long long ans=0;
	vector<int> l(n+1,0),r(n+1,0);

	for(int i=1; i<=n; i++){
		if(s[i-1]=='<'){
			l[i]=l[i-1]+1;
		}
	}
 
	for(int i=n-1; i>=0; i--){
		if(s[i]=='>'){
			r[i]=r[i + 1]+1;
		}
	}
 
	for(int i=0; i<=n; i++){
		a[i]=max(l[i],r[i]);
		ans+=a[i];
	}
 
	cout<<ans<<endl;
}