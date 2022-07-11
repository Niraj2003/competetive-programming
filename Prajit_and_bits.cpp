#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin>>n;
    int size=0,temp=n;
    while(n!=0){
        n/=2;
        size++;
    }
    cout<<size-__builtin_popcount(temp)<<"\n";
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}