#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int a,b,x;
    cin>>a>>b>>x;

    int k = abs(a-b);
    if( k == 2*x || k ==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    

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