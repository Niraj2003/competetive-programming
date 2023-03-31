#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution(){
    fast_cin(); 
    int a,b;
    cin>>a>>b;
    int ans = b - a;
    for(int a1 = a; a1 < b; a1++) {
        int b1 = 0;
        for(int i = 21; i >= 0; i--) {
            if((b >> i) & 1) {
                b1 ^= (1 << i);
            } else {
                if((a1 >> i) & 1) {
                    b1 ^= (1 << i);
                    break;
                }
            }
        }
        ans = min(ans, a1 - a - b + (a1 | b1) + 1);
    }
        cout << ans << '\n';
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