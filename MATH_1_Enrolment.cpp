#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x,y;
    cin>>x>>y;

    if(y>x){
        cout<<y-x<<endl;
    }

    else{
        cout<<0<<endl;
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