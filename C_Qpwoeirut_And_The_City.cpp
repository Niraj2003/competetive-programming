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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll ans = 0;
    if(n % 2 == 1){
        for(int i = 1 ; i < n; i += 2){
            ans += (max(a[i - 1], a[i + 1]) - a[i] < 0) ? 0 : max(a[i - 1], a[i + 1]) - a[i] + 1;
        }
    }
    else{
        ll ans1 = 0;
        for(int i = 1 ; i < n - 1; i += 2){
            ans1 += (max(a[i - 1], a[i + 1]) - a[i] < 0) ? 0 : max(a[i - 1], a[i + 1]) - a[i] + 1;
        }

        ll ans2 = 0;
        for(int i = 2 ; i < n - 1; i += 2){
            ans2 += (max(a[i - 1], a[i + 1]) - a[i] < 0) ? 0 : max(a[i - 1], a[i + 1]) - a[i] + 1;
        }

        ll ans3 = 1e18;
        if(n == 6){
            ans3 = 0;
            for(int i = 1; i < n - 1; i += 3){
                ans3 += (max(a[i - 1], a[i + 1]) - a[i] < 0) ? 0 : max(a[i - 1], a[i + 1]) - a[i] + 1; 
            }
        }

        ans = min({ans1,ans2,ans3});
    }

    cout << ans << endl;

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