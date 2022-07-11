#include <bits/stdc++.h>
using namespace std;
#define ll long long

// vector<vector<int>>ans;

void solution(){
    int n,m;
    cin>>n>>m;

    int ans[n][m];

    int temp[4][4] = { {1,0,0,1}, {0,1,1,0} ,{0,1,1,0}, {1,0,0,1}};
    int i = 0;
    while(i<n){
        for(int j=0;j<m;j++){
            ans[i][j] = temp[i%4][j%4];
        }
        i++;
    }
    
    i=0;
    while(i<n){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        i++;
        cout<<endl;
    }
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}