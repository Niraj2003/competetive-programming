#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int d = 2;
    int i=-1,j=-1;
    cout<<d<<endl;

    for(i=1;i<=n;i=i+2){
        for(j=i;j<=n;j=j*2){
            cout<<j<<" ";
        }
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