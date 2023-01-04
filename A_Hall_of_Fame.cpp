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
    int ans = -1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            if(s[i-1]=='R' && s[i]=='L'){
                cout<<0<<endl;
                return;
            }
            else{
                ans = i;
            }
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