#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ct = 0;
    if(b>a){
        ct++;
    }
    if(c>a){
        ct++;
    }
    if(d>a){
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