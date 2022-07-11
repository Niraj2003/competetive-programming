#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b;
    cin>>a>>b;

    if(a%3==0 || b%3==0){
        cout<<0<<endl;
        return;
    }
    int p = a%3;
    int q = b%3;

    if(p==q){
        cout<<1<<endl;
    }

    else if(abs(p-q)==1){
        cout<<2<<endl;
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