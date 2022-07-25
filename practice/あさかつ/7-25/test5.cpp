#include <bits/stdc++.h>
 
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
#define debug(output) if(debugFlag)cout<<#output<<"= "<<output<<"\n";
using lint = long long;
typedef pair<int,int> P;
const bool debugFlag=true;
const lint linf=1.1e18;const int inf=1.01e9;
constexpr int MOD=1000000007;
template<class T>bool chmax(T &a, const T &b) { if(a < b){ a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if(a > b){ a = b; return 1; } return 0; }
 
bool match(string a,string b){
    if(a.size()!=b.size())return false;
    int n=a.size();
    int cnt=0;
    rep(i,n)if(a[i]!=b[i])++cnt;
    return cnt<=1;
}
 
signed main(){
    string f,l;cin>>f>>l;
    int n;cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    s.push_back(l);
    map<string,int> dp;
    dp[f]=0;
    queue<string> que;
    que.push(f);
    while(!que.empty()){
        string a=que.front();que.pop();
        rep(i,n+1){
            if(match(a,s[i])){
                if(dp.find(s[i])==dp.end()){
                    dp[s[i]]=dp[a]+1;
                    que.push(s[i]);
                }
            }
        }
    }
    if(dp.find(l)==dp.end()){
        cout<<-1<<"\n";
        return 0;
    }
    vector<string> res;
    string a=l;
    res.push_back(a);
    s.push_back(f);
    while(dp[a]>0){
        rep(i,n+2){
            if(match(a,s[i])&&dp[s[i]]==dp[a]-1){
                res.push_back(s[i]);
                a=s[i];
            }
        }
    }
    if(dp[l]==0)res.push_back(f);
    cout<<res.size()-2<<"\n";
    rrep(i,res.size())cout<<res[i]<<"\n";
    return 0;
}