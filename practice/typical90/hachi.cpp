#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_set>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        if((int)s[0]-'0'==8){
            cout<<"Yes"<<endl;
            return 0;
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }else if(n==2){
        if((int)(s[0]*10+s[1])%8==0 || (int)(s[1]*10+s[0])%8==0){
            cout<<"Yes"<<endl;
            return 0;
        }else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    vector<int> sets(10,0);
    for(int i=0; i<n; i++){
        sets[(int)s[i]-'0']++;
    }

    for(int i=104; i<1000; i+=8){
        bool flg=true;
        vector<int> judge(10,0);
        judge[i%10]++;
        judge[(i/10)%10]++;
        judge[(i/100)%10]++;
        
        for(int j=0; j<10; j++){
            if(judge[j]>sets[j]){
                flg=false;
                break;
            }
        }
        if(flg){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

}
