#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution(){
    fast_cin();
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    ll ans=0;
    for (int i=1; i<n; i++){
        ans = max(ans, ((a[i]-a[0]) + (a[i]-a[i-1])) );
    }
    for (int i=0; i<n-1; i++){
        ans = max(ans, (a[n-1]-a[i]) + (a[i+1]-a[i]) );
    }
    cout<<ans<<endl;
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