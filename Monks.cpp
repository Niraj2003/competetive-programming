#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    ll n;
    cin >> n;
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(a[n-1]==a[0]){
        cout << 0 << endl;
        return;
    }
    ll curr=0;
    ll ans=n;
    for(ll i=0;i<n;i++){
        curr+=a[i];
        ll x=sum-curr;
        if(x>=a[i]*(i+1)-curr)
            ans=min(ans,n-i-1);
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