#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

int a,b,c[10000],m,n,s;

void solution(){
    fast_cin();
    cin>>s>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        c[a]+=b;
        if(m<a)
            m=a;
    }
    for(int i=1;i<=m;i++)
        if(s>i)
            s=s+c[i];

    if(s>m)
        cout<<"YES";
    else 
        cout<<"NO";
}

signed main(){
    fast_cin();
    solution();
}