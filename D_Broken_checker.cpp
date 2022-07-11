#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    
    if(n>0 && n<3){
        cout<<n+1<<endl;
    }
    else if(n==5){
        cout<<1<<endl;
    }
    else{
        cout<<n-2<<endl;
    }
    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}