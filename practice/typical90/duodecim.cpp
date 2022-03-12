#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
 
using namespace std;
 
int main(){
    long long l;
    cin>>l;
    long long sum=1;
    int count=0;
    for(int i=l-1; i>=l-11; i--){
        sum*=i;
        count++;
        sum/=count;
    }
    cout<<sum<<endl;
    
    return 0;
}
