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

    int a = n/2;
    int k = 0;
    for(int i=0;i<n;i+=2){
        cout<< n-i<<" ";
        k = i;
    }

    
    if(n%2==1)
        for(int i=k-1;i>0;i-=2){
            cout<< n-i <<" ";
        }
    else{
        for(int i=1;i<=n;i+=2){
        cout<< i <<" ";
    }
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