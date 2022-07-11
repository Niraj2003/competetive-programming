#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n , q;
    cin >> n >> q;
    ll c[2];
    c[0] = 0 , c[1] = 0;
    
    ll ar[n]; for(int i=0;i<n;i++) {
        cin >> ar[i];
        c[__builtin_popcountll(ar[i])%2]++;
    }
    
    ll x;
    
    for(int i=0;i<q;i++)
    {
       
        cin >> x;
        x = __builtin_popcountll(x);
        if(x%2==1){
            cout << c[1] << " " << c[0] << "\n";
        } else {
            cout << c[0] << " " << c[1] << "\n";
        }
    }
    cout << "\n";
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}