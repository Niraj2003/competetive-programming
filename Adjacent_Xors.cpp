#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution(){
    fast_cin();
    int n,x,ans;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>>v;
    int temp[2*n][2];
    for(int i=0;i<2*n;i++){
        temp[i][0] = 0;
        temp[i][1] = 0;
    }
    v.push_back({0,0});

    int i = 1;
    while(i<n){
        temp[i][1]= max( temp[i-1][1] + ( (a[i-1]+x)^(a[i]+x) ) , temp[i-1][0] + (a[i-1]^(a[i]+x)) );
        temp[i][0]= max( temp[i-1][1] + ( (a[i-1]+x)^a[i] ) , temp[i-1][0] + (a[i-1]^a[i]));
        v.push_back({temp[i][0],temp[i][1]});
        i++;
    }
    // reverse(v.begin(),v.end());
    ans = max( v[v.size()-1].second, v[v.size()-1].first) ;

    cout << ans << endl;

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