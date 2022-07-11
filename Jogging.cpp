#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    if(n==1){
        cout<<x<<endl;
        return;
    }
    arr[0] = x;
    arr[1] = x;
    ll s=2*x;
    for(ll i=2;i<n;i++){
        arr[i] = (arr[i-1]*2) %1000000007;
        s = s+arr[i];
    }
    cout<<s%1000000007<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}