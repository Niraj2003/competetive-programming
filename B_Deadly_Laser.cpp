#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int x,y,d,n,m;
    cin>>n>>m>>x>>y>>d;
    if((1<x-d & y+d<m) || (1<y-d && x+d< n)) 
        cout<<n+m-2<<endl;
    else{
        cout<<-1<<endl;
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