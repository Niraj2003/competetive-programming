#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    map<char,int>m2;
    map<int,int>m1;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m1[a[i]]++;
    }
    string s;
    cin>>s;
    map<int, set<char>> m;
    for (int i = 0; i < n; i++) {
        m[a[i]].insert(s[i]);
    }
    for (auto v : m) {
        if (v.second.size() > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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