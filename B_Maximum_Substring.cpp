#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

// ll help(string s, ll q, ll k, char c){
//     for(ll i=0;i<s.length();i++){
//         ll k = 0;
//         if(s[i]=='0'){
//             while (i<s.length() && s[i]=='0'){
//                 i++, k++;
//             }
//         }
//         q = max(k,q);
//     }
//     return q;
// }

void solution(){
    fast_cin();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0,y=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='0'){
            x++;
        }
        else{
            y++;
        }
    }
    ll p = 0,q=0;
    for(ll i=0;i<s.length();i++){
        ll k = 0;
        if(s[i]!='1'){
            while ( s[i]=='0' && s.length()>i ){
                k++,i++;
            }
        }
        q = max(k,q);
        
    }
    for(ll i=0;i<s.length();i++){
        ll k = 0;
        if(s[i]!='0'){
            while (s[i]=='1' && s.length()>i ){
                k++,i++;
            }
        }
        p = max(k,p);
    }
    ll t = max(p*p, max(q*q,x*y));
    cout<< t << endl;

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