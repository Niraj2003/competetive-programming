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

    int a = x- n + 1;
    if(a>0){
        cout<<a<<" ";
        for(int i=1;i<=n;i++){
            if(i!=a){
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    else{
        cout<<-1<<endl;
        return;
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