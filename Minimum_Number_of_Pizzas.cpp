#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,k;
    cin>>n>>k;
    cout<<n/__gcd(n,k)<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}