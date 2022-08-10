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
using ll=long long;
 
#define mod 998244353

pair<double,double> rotation(double x,double y,double d){
    double deg=M_PI/180*d;
    double nx=x*cos(deg)-y*sin(deg);
    double ny=x*sin(deg)+y*cos(deg);

    return {nx,ny};
}
 
int main(){
    double a,b,d;
    cin>>a>>b>>d;
    pair<double,double> p=rotation(a,b,d);
    double nx=p.first;
    double ny=p.second;
    printf("%.6lf %.6lf",nx,ny);
}