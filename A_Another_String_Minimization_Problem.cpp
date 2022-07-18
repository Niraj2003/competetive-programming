#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    string s="";
    for(int i=0;i<m;i++){
        s += 'B';
    }
    // int v[n+1];
    // for(int i=0;i<=n;i++){
    //     v[i]=-1;
    // }

    for(int i=0;i<n;i++){
        int p = a[i];
        int q = m + 1 - a[i];
        int a = min(p,q);
        int b = max(p,q);

        if(s[a-1]!='A'){
            s[a-1] = 'A';
        }
        else{
            s[b-1] = 'A';
        }
    }
    cout<<s<<endl;


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