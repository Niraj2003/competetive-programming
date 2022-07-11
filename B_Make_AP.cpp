#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,c;
    cin>>a>>b>>c;

    int x = 2*b - c;
    int y = (a+c) /2;
    if(2*y!=(a+c)){
        y=0;
    }
    int z = 2*b - a;

    if(x%a==0 && x>0){
        cout<<"YES"<<endl;
    }
    else if(y%b==0 && y>0){
        cout<<"YES"<<endl;
    }
    else if(z%c==0 && z>0){
        cout<<"YES"<<endl;
    }
    
    else{
        cout<<"NO"<<endl;
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