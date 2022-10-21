#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    ll a,b;
    cin>>a>>b;
    ll arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        ll p,q;
        cin>>p>>q;
        if(p==0){
            for(int x=0;x<a;x++){
                if(arr[x]%2==0){
                    arr[x] += q;
                }
            }
        }
        if(p==1){
            for(int x=0;x<a;x++){
                if(arr[x]%2!=0){
                    arr[x] += q;
                }
            }
        }
        cout<<accumulate(arr,arr+a,(ll)0)<<endl;
    }

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