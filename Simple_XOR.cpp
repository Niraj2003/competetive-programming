#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int l,r;
    cin>>l>>r;
    if(l%2==0){
        if(l+3 <= r)
            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        else
            cout<<-1<<endl;

    }
    else{
        l=l+1;
        if(l+3 <= r)
            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        else
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