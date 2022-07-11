#include <bits/stdc++.h>
using namespace std;
#define ll long long

string ans ="";
int n;
int i=0;
int k=0;

int solve(string s){
    
    if( k + s[i] -'a' > n){
        ans += s[i];
        i++;
        return 0;
    }

    k += s[i]-'a';
    i++;
    return k;
    k -= s[i] - 'a';
}

void solution(){
    string s;
    cin>>s;
    cin>>n;

    solve(s);

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
        cout<<endl;
        ans.clear();
    }
    return 0;
}