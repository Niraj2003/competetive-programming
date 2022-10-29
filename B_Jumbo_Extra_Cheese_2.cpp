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
    vector<int>v;
    ll a,b;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ll k = min(a,b);
        k *=2;
        sum += k;
        v.push_back(max(a,b));        
    }
    sort(v.begin(),v.end());
    // cout<<sum<<" ";
    sum += v[0];
    // cout<<sum<<" ";
    for(int i=1;i<v.size();i++){
        sum += (v[i]-v[i-1]);
        // cout<<sum<<" ";
        // cout<<v[i]<<" ";
    }
    sum += v[v.size()-1];
    cout<<sum<<endl;

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