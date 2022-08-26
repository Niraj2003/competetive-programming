#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n > 2*k){
        cout<<"NO"<<endl;
        return;
    }
    
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }

    for(auto a:m){
        if(a.second > 2){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    ll x = 1;
    while(t--){
        cout<<"Case #"<<x<<": ";
        solution();
        x++;

    }
    return 0;
}