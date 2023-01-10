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
    set<ll>s;
    for(ll i=2;i*i<=n;i++){
        ll k = i*i;
        while(k <=n){
            s.insert(k);
            k = k*i;
        }
    }
    cout<<n-s.size()<<endl;

}

int main(){
    fast_cin();
    solution();
    return 0;
}