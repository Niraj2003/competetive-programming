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
    int t = 0;
    string k = "0";
    k = k + s;
    for(int i=0;i<k.length();i++){
        if(k[i]!=k[i-1]){
            t++;
        }
    }
    if(t-2 < 0){
        cout<<0<<endl;
        return;
    }
    cout<<t-2<<endl;
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