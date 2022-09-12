#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    string s;
    cin>>s;
    int n = s.length();
    vector<int> p[26];
    
    for (int i = 0; i < n; i++) {
        p[s[i] - 'a'].push_back(i);
    }
    
    int x = s[0] - 'a', y = s[n - 1] - 'a';
    if (x > y) {
        swap(x, y);
        for (int i = 0; i < 26; i++) {
            reverse(p[i].begin(), p[i].end());
        }
    }
    vector<int> ans;
    for (int i = x; i <= y; i++) {
        ans.insert(ans.end(), p[i].begin(), p[i].end());
    }
    cout << abs(s[0] - s[n - 1]) << " " << ans.size() << "\n";
    if (ans[0]) {
        reverse(ans.begin(), ans.end());
    }
    for (int i = 0; i < int(ans.size()); i++) {
        cout << ans[i] + 1 << " \n"[i == int(ans.size()) - 1];
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