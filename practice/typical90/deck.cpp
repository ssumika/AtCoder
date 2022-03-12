#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int q;
    cin>>q;
    int t[q],x[q];
    vector<int> card;
    for(int i=0; i<q; i++){
        cin>>t[i]>>x[i];
    }
    for(int i=0; i<q; i++){
        if(t[i]==1){
            card.insert(card.begin(),x[i]);
        }
        if(t[i]==2){
            card.push_back(x[i]);
        }
        if(t[i]==3){
            cout<<card[x[i]-1]<<endl;
        }
    }
}

