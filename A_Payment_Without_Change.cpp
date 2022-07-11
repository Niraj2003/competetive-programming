#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){

    int a,b,n,s;
    cin>>a>>b>>n>>s;

    cout<<((s<=min(s/n,a)*n+b)?"YES ":"NO ");

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}