#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin >> n;
    ll ans = 0;
    ans = (n/5) * 2;

    if (n%5 == 1 || n%5 == 0) {
        //none
    }
    else {
        ans ++;
    }
    cout << ans << "\n";
    
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}