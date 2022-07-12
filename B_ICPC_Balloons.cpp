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
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int ans=0;
    for(auto a:mp){
        ans+= a.second;
    }
    cout<<ans + mp.size() <<endl;
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