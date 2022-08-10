#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

int a[10000];

void solution(){
    fast_cin();
    int n;
    cin>>n;

    int k = n/2;
    int p = k+1;
    for(int i=1;i<n-1;i+=2){
        a[i] = k;
        k--;
    }
    for(int i=0;i<n-1;i+=2){
        a[i] = p;
        p++;
    }
    if(n%2!=0)
        a[n-1] = n;
    else
        a[n-1] = 1;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

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