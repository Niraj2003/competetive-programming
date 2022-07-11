#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s, t; 
    cin >> s >> t;
    if(t.find('a') != string::npos) 
        cout << (t.size() == 1 ? 1 : -1) << "\n";
    else 
        cout << (1ll << s.size()) << "\n";
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}