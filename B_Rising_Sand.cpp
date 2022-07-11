#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ct = 0;
    for(int i=1;i<n-1;i++){
        if(arr[i] > (arr[i-1] + arr[i+1])){
            ct++;
        }
    }
    if(k==1 ){
        cout<< (n-1) /2<<endl;
    }
    else{
        cout<<ct<<endl;
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