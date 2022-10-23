#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

bool chk(vector<int>&v){
    int g = v[0];
    for(int i=1;i<v.size();i++){
        g = __gcd(g,v[i]);
    }
    if(g==1){
        return true;
    }
    return false;
}

void solution(){
    fast_cin();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(chk(v)){
        cout<<0<<endl;
        return;
    }
    int cost = 0;
    vector<int>x = v;
    x[x.size()-1] =  __gcd( n, x[x.size()-1] );
    if(chk(x)){
        cout<<1<<endl;
        return;
    }

    vector<int>t = v;
    t[t.size()-1] =  __gcd( n, t[t.size()-1] );
    if(chk(t)){
        cout<<2<<endl;
        return;
    }
    t.clear();
    t = v;
    t[t.size()-2] =  __gcd( n-1, t[t.size()-2] );
    if(chk(t)){
        cout<<2<<endl;
        return;
    }

    cout<<3<<endl;
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