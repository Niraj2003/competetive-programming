#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll m,n;
    cin>>m>>n;

    cout<< ((n-1)*n/2)  +  (n*m*(m+1)/2)<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}