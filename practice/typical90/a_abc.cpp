#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_set>
 
using namespace std;

int main(){
    long long k;
    cin>>k;
    for(long long a=1; a<=sqrt(k); a++){
        for(long long b=a; b<=sqrt(k); b++){
            if(k%(a*b)==0){
                long long c=k/(a*b);
                if(a<b && b<c){
                    vector<int> set;
                    set.push_back(a);
                    set.push_back(b);
                    set.push_back(c);
                    int count=0;
                    do{
                        count++;
                    }while(next_permutation(set.begin(),set.end()));
                }

            }
        }
    }
}