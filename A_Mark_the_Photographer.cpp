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
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    for(int i=0;i<n;i++){
        // cout<<a[n+i]<<" "  << a[i] <<" ";
        if(!(a[n+i] - a[i] >= x)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


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