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
 
bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く
 
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
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


 
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    vector<int> t(b-a+1);
    for(int i=a; i<=b; i++){
        for(int j=c; j<=d; j++){
            if(IsPrime(i+j)==false){
                t[i-a]+=1;
            }
        }
    }
 
    int taka=a;
    int taka_s=t[0];
    for(int i=0; i<t.size(); i++){
        if(taka_s<t[i]){
            taka=a+i;
            taka_s=t[i];
        }
    }
 
    for(int i=c; i<=d; i++){
        if(IsPrime(taka+i)){
            cout<<"Aoki"<<endl;
            return 0;
        }
    }
    cout<<"Takahashi"<<endl;
}