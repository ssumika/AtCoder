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
    char s[n][n],t[n][n];
    int s_shape=0,t_shape=0;

    vector<pair<int,int>> s_set;
    vector<pair<int,int>> t_set;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>s[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>t[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i][j]=='#'){
                s_shape++;
                s_set.push_back(make_pair(i,j));
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(t[i][j]=='#'){
                t_shape++;
                t_set.push_back(make_pair(i,j));
            }
        }
    }

    if(s_shape!=t_shape){
        cout<<"No"<<endl;
        return 0;
    }else{
        for(int r=0; r<4; r++){
            for(int i=0; i<s_set.size(); i++){
                int x=s_set[i].first;
                int y=s_set[i].second;
                s_set[i].first=y;
                s_set[i].second=-x;
            }
            sort(s_set.begin(),s_set.end());
            /*
            for(int j=0; j<s_set.size(); j++){
                cout<<s_set[j].first<<" "<<s_set[j].second<<endl;
                cout<<t_set[j].first<<" "<<t_set[j].second<<endl;
            }
            */
            int x_diff=t_set[0].first-s_set[0].first;
            int y_diff=t_set[0].second-s_set[0].second;
            bool flg=true;
            for(int i=0; i<s_set.size(); i++){
                if(s_set[i].first+x_diff!=t_set[i].first || s_set[i].second+y_diff!=t_set[i].second){
                    flg=false;
                    break;
                }
            }
            if(flg==true){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        cout<<"No"<<endl;
    }
    
}
