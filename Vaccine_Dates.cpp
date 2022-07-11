#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int d,l,r;
    cin>>d>>l>>r;

    if(d>=l && d<=r){
        cout<<"Take second dose now"<<endl;
    }

    else if(d>r){
        cout<<"Too Late"<<endl;
    }

    else if(d<l){
        cout<<"Too Early"<<endl;
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