#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x,y;
    cin>>x>>y;

    int a,b;
    // int a = (x)/10 +1 , b = (y)/10 + 1;

    if(x%10==0){
        a = x/10 ;
    }
    else{
        a = 1 + x/10;
    }

    if(y%10==0){
        b = y/10 ;
    }
    else{
        b = 1 + y/10;
    }

    cout<<abs(a-b)<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}