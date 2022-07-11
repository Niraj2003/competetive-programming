#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,x;
    cin>>a>>b>>x;

    int ct = 0;
    while(a < b){
        a += x;
        ct++;
    }
    cout<<ct<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}