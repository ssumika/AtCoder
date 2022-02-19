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

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int a=x1+2;
    int b=y1+1;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1+2;
    b=y1-1;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1-2;
    b=y1+1;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1-2;
    b=y1-1;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }



    a=x1+1;
    b=y1+2;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1+1;
    b=y1-2;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1-1;
    b=y1+2;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    a=x1-1;
    b=y1-2;
    if((a-x2)*(a-x2)+(b-y2)*(b-y2)==5){
        cout<<"Yes"<<endl;
        return 0;
    }

    cout<<"No"<<endl;
}