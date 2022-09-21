#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    ll n,k;
    cin>>n>>k;
    map<ll,vector<ll>>m;

    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        m[(i+1)%(k)].push_back(arr[i]);
    }

    ll ans = 0;
    // sort(arr,arr+n);
    // reverse(arr,arr+n);
    // cout<< accumulate(arr,arr+k,(ll)0) << endl;
    vector<int>v;
    for(auto a:m){
        sort(a.second.rbegin(),a.second.rend());
        v.push_back(a.second[0]);
        // ans += a.second[0];
    }
    
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    ans = accumulate(v.begin(),v.begin()+k,(ll)0);
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