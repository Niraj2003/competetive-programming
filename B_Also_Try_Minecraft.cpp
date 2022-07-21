#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for(int i = 0; i < n; ++i){
    	cin>>a[i];
    }

    vector<long long> p(n), q(n);
    for(int i = n - 2; i >= 0; --i){
    	q[i] = q[i + 1] + max(0, a[i + 1] - a[i]);
    }

    for(int i = 1; i < n; ++i){
    	p[i] = p[i - 1] + max(0, a[i - 1] - a[i]);
    }
 
    for(int i = 0; i < m; ++i){
    	int s, t;
    	cin >> s >> t; --s; --t;
    	if (s > t) {
            cout << q[t] - q[s] << endl;
    	}
    	else{
    		cout << p[t] - p[s] << endl;  		
     	}
    }

}

int main(){
    fast_cin();
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}