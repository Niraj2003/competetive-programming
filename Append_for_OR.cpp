#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,y;
    cin>>n>>y;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int d;
    if(n==1){
        d = v[0];
    }
    else{
        d = v[0] | v[1];
        for(int i=2;i<n;i++){
            d = d | v[i];
        }
    }
    // cout<<d<<" ";
    for(int i=0;i<=y;i++){
        if((d | i) == y){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;

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