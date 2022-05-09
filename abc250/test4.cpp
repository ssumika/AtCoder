#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool IsPrime(ll num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く
    double sqrtNum = sqrt(num);
    for (ll i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }
    // 素数である
    return true;
}

int main() {
    ll n;
    cin>>n;
    vector<bool> prime(1000001);
    vector<ll> p;
    for(ll i=0; i*i*i<=n; i++){
        prime[i]=IsPrime(i);
        if(prime[i]){
            p.push_back(i);
        }
    }

    ll ans=0;
    for(ll i=0; i<p.size(); i++){
        for(ll j=0; j<i; j++){
            if(p[i]*p[i]*p[i]*p[j]>n){
                break;
                //cout<<p[i]<<" "<<p[j]<<endl;
            }
            ans++;
        }
    }

    cout<<ans<<endl;

}