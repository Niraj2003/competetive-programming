#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    long long int  a[100000],b[100000],i,x;
    for(i =0;i<n;i++){
        cin>>a[i];
    }
    for(i =0;i<n;i++){
        cin>>x;
        b[x] = i; 
    }
    long long int ans=0,mmax=b[a[0]];
    for(i =1;i<n;i++){
        if(b[a[i]] < mmax) 
            ++ans;
        mmax = max(mmax, b[a[i]]);
    }
    cout<<ans;

    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}