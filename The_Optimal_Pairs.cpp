#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i*i<=n;i++){
        if((n%i)==0){
            if((n/i)==2)
                ans++;
            else
                ans+=2;
            int j=n/i;
            if(j==i || j==n)
                continue;
            if((n/j)==2)
                ans++;
            else
                ans+=2;
        }
    }
    cout<<ans<<'\n';
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}