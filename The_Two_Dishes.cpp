#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,s;
    cin>>n>>s;
    if(n>s){
        cout<< s <<endl;
    }
    else
        cout<< (2*n) - s<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}