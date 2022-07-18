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
    int a[n];
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans = 0;
    int k = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] == 0) {
            k += 1;
        } else {
            ans += k;
            k = 0;
        }
    }
    ans += accumulate(a, a+n - 1, 0LL);
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