#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,x;
    cin>>n>>x;
    int t;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    map<int, int> val_to_ind;
	for (int i = 0; i < n; i++) {
		if (val_to_ind.count(x - v[i])){
			cout << i + 1 << " " << val_to_ind[x - v[i]] << endl;
			return;
		}
		val_to_ind[v[i]] = i + 1;
	}
    cout<<"IMPOSSIBLE"<<endl;

}

int main(){
    fast_cin();
    solution();
    return 0;
}