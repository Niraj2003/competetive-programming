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
    vector<int>v(n,-100);
    // int a = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int f = -1;
    int i = 1;
    while(i<n){
        if(v[i]==-1 && v[i-1]==-1){
            f = 1;
        }
        i++;
    }
    int d = accumulate(v.begin(),v.end(),0);
    int ans = f == 1 ? d + 4 : d==n ? d-4 : d;
    cout<< ans <<endl;
    
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