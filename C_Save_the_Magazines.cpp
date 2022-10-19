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
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0, j = -1; i < n; i++) {
        if (s[i] == '0') {
            j = i;
        } else if (j >= 0 && a[i] < a[j]) {
            // cout<<a[i]<<" "<<a[j]<<endl;
            swap(s[i], s[j]);
            j = i;
        }
        // cout<<a[i]<<" "<<a[j]<<endl;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans += a[i];
        }
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