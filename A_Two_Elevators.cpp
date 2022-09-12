#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int a,b,c;
    cin>>a>>b>>c;

    int p = abs(b-c) + c;
    int q = a;
    if(p==q){
        cout<<3<<endl;
    }
    else if(p > q){
        cout<< 1 <<endl;
    }
    else if(p < q){
        cout<< 2 <<endl;
    }

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