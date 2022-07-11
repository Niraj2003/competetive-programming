#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n; cin >> n;
    for (int r = n, l = 1; r >= l; r--, l++) {
        cout << r << " ";
        if (l != r) {
            cout << l << " ";
        }
    }
    cout << '\n';
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}