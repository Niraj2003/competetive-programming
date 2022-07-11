#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,k;
    cin>>n>>k;

    int totalgrp;
    if(n%5==0){
        totalgrp=n/5;
    }
    else{
        totalgrp= n/5 + 1;
    }

    int grp;
    if(k%5==0){
        grp=k/5;
    }
    else{
        grp= k/5 + 1;
    }

    cout<<totalgrp-grp<<endl;
    
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}