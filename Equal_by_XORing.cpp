#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,n;
    cin>>a>>b>>n;

    if(a==b){
        cout<<0<<endl;
        return;
    }
    
    if(n> (a^b)){
        cout<<1<<endl;
        return;
    }

    int p = log2(a^b);
    int q = log2(n);

    if(p==q && ceil(log2(n)!=floor(log2(n)))){
        cout<<2<<endl;
        return;
    }

    if(p==q && ceil(log2(n)==floor(log2(n)))){
        cout<<-1<<endl;
        return;
    }

    cout<<-1<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}