#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    unordered_map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int a = x%2;
        mp[a].push_back(i+1) ;
    }
    if(mp[0].size()==1){
        cout<<  mp[0][0] <<endl;
    }
    else{
        cout<< mp[1][0] <<endl;
    }
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}