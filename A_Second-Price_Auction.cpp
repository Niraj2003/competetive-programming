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
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>a = v;
    sort(a.rbegin(),a.rend());
    int an1 = find(v.begin(),v.end(),a[0]) - v.begin() + 1;
    int an2 = a[1];
    cout<<an1<<" "<<an2<<endl;

}

int main(){
    fast_cin();
    solution();
    return 0;
}