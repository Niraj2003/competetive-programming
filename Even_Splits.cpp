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
    if(n <= 2){
        cout<<s<<endl;
        return;
    }
    int p=0,q=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            p++;
        }
        else{
            q++;
        }
    }
    string ans = "";
    for(int i=0;i<n;i++){
        if(i<p){
            ans += '0';
        }
        else{
            ans += '1';
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