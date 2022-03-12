#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
vector<bool> choose;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0; i<m; i++){
        cin>>a[i]>>b[i];
    }
    int k;
    cin>>k;
    int c[k],d[k];
    for(int i=0; i<k; i++){
        cin>>c[i]>>d[i];
    }

    int max=0;

    for(int i=0; i<(1<<k); i++){
        choose.assign(n,false);
        int count=0;
        for(int j=0; j<k; j++){
            if((i&(1<<j))==0){
                choose[c[j]]=true;
            }else{
                choose[d[j]]=true;
            }
        }
        for(int j=0; j<m; j++){
            if(choose[a[j]]==true && choose[b[j]]==true){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max<<endl;
    
	return 0;
}