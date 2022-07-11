#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,d;
    cin>>n>>d;

    int len[n];
    for(int i=0;i<n;i++){
        cin>>len[i];
    }

    sort(len,len+n);
    int ct=0;
    for(int i=0;i<n;i++){
        if((len[i+1]-len[i]) <=d ){
            i++;
            ct++;
        }
    
    }

    cout<<ct<<endl;
    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}