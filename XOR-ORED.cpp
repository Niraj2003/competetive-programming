#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a = 0;

    for(int i=0;i<n;i++){
        a = a | arr[i];
    }

    int p=0;
    for(int i=0;i<n;i++){
        p = p | (arr[i] ^a);
    }

    cout<<a<<" "<<p<<endl;


    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}