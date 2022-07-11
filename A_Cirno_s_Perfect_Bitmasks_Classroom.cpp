#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll x;
    cin>>x;
    if(x==1)
        cout<<3<<endl;
    else{
        if(__builtin_popcount(x) > 1){
            cout<< (x & -x) <<endl;
        }
        else
            cout<<(x^1)<<endl;  
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