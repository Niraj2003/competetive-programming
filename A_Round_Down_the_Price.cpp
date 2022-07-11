#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin>>n;
    ll arr[12] = {
        1, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000
    };

    int ans;
    for(int i=0;i<12;i++){
        if(n-arr[i] >= 0){
            ans = n-arr[i] ;
        }
    }
    cout<<ans<<endl;

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}