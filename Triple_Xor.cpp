#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n,k;
    cin>>n>>k;
    ll x = pow(2,n);
    ll temp = x-1;
    cout<<temp*(temp-1)<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}