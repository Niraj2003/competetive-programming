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
    map<char,int>m;
    for(auto a:s){
        m[a]++;
    }
    for(auto a:m){
        if(a.second > 1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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