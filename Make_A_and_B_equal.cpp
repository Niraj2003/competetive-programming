#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int ct = 0;
    int delta = 0; 
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        delta += a[i] - b[i];
        ans += abs(a[i] - b[i]);
    }
    ans = ans/ 2;
    if(delta) {
        cout << "-1\n";
        return;
    }
    cout << ans << "\n";
}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}