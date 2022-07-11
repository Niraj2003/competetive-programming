#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x,y;
    cin>>x>>y;
    int t = (x&y);
    int ans= (t^x) + (t^y);
    cout<<ans<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}