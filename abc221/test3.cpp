#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> num;
    while(n>0){
        num.push_back(n%10);
        n/=10;
    }

    sort(num.begin(),num.end());
    int ans=0;
    int mul=0;
    do{
       for(int i=0; i<num.size(); i++){
           int sep=i;
           int mul1=0;
           int mul2=0;
           int count=0;
           for(int j=sep; j>=0; j--){
               mul1+=num[j]*pow(10,count);
               count++;
           }
           count=0;
           for(int j=num.size()-1; j>sep; j--){
               mul2+=num[j]*pow(10,count);
               count++;
           }
           //cout<<mul1<<" "<<mul2<<endl;
           if(mul1*mul2>ans){
                ans=mul1*mul2;
            } 
       }
    }while(next_permutation(num.begin(),num.end()));

    cout<<ans<<endl;
}
