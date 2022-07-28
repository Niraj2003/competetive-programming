#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')x++;
        else x--;
    }
    x=abs(x);
    cout << x/k + (int)(x%k!=0) << endl;
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