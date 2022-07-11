#include <bits/stdc++.h>
using namespace std;
#define ll long long

char arr[26] = { 'a','b','c','d','e','f'};

void solution(){
    int n;
    cin >> n;
    int K;
    cin >> K;
    int mx = (n + 1) / 2;
    if (mx < K) {
        cout << -1 << '\n';
    } else {
        string res(n, 'a');
        for (int i = 0, j = n - 1, k = 0; i <= j; ++i, --j, ++k) {
            k = min(k, K - 1);
            res[i] = res[j] = (char)('a' + k);
        }
        cout << res << '\n';
    }

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}