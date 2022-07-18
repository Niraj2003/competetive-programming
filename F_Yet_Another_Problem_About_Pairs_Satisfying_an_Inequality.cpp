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
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll res =0;
    vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (arr[i] >= i) {continue;}
		res += (ll)(lower_bound(v.begin(), v.end(), arr[i]) - v.begin());
		v.push_back(i);
	}
	cout << res << '\n';

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