#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;

    int x = (abs(c-a)+abs(d-b));
        
    if(k<x)
        cout<<"NO"<<endl;
    else if((x+k)%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}