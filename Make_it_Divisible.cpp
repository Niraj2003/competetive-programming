#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n,i;
    cin>>n;
    cout<<"3";
    if(n==2 && n>1)
        cout<<"3";
    else if(n>1){
        for(i=0;i<n-2;i++){
            cout<<"0";
        }
        cout<<"3";
    }
    cout<<endl;

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}