#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   

    vector<pair<int,int>>v;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    


}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}