#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>f[i];
    }

    cout<<f[0]-s[0]<<" ";
    int i=1;
    while(i<n){
        cout<<f[i] - max(s[i], f[i-1])<<" ";
        i++;
    }
    cout<<endl;

    

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}