#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    cout<<min(n*a, n/m*b + min(n%m*a,b))<<endl;
    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}