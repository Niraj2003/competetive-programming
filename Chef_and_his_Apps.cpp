#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int s,x,y,z;
    cin>>s>>x>>y>>z;

    int rem = s - (x+y);
    if(rem >= z){
        cout<<0<<endl;
    }
    else if(rem + x >= z || rem + y >=z){
        cout<<1<<endl;
    }
    else if(rem + x + y >=z){
        cout<<2<<endl;
    }
    else{
        cout<<-1<<endl;
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