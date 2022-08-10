#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution() {
    int n,m,ones=0,a=0,t=0;

    string s = "N"; // taking temp first char 
    cin >> n >> m;

    string str ;
    cin>>str;

    s += str;

    for(int i=1;i<=n;++i){
        if(s[i]=='1') 
            ones++;
    }

    if(ones*m%2!=0) {
        cout << 0 << endl;
        return;
    }

    if(ones==0) {
        int ans = m*n;
        cout << ans << endl;
        return;
    }

    if(m%2!=1) {

        for(int i=1;i<n+1;i++) {
            if(s[i]!='0') 
                break;
            a++;
        }

        for(int i=n;i>0;i--) {
            if(s[i]!='0') 
                break;
            a++;
        }
        int ans = a+1;
        cout << ans << endl;
        return;

    }

    int i = 1;
    while(n >= i){
        if(s[i]!='0') 
            t++;

        if(t==ones/2) 
            a++;

        i++;
    }
    cout << a << endl;
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