#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,x;
    cin>>n>>x;
    
    int diff = n-x;

    if(diff%2==1 && x%2==0)
        cout<<"NO"<<endl;
    
    else
        cout<<"YES"<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}