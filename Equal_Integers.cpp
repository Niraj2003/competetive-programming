#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        int ct = 0;
        int temp = abs(y-x);
        if(temp%2!=0){
            x++;
            ct++;
        }
        temp = abs(y-x);
        ct = ct + temp/2;

        cout<<ct<<endl;
    }
    else{
        cout<<y-x<<endl;
    }    
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}