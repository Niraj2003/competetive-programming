#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,x,y;
    cin>>n>>x>>y;

    if(y>x){
        swap(y,x);
    }

    if( x!=0 && y!=0){
        cout<<-1<<endl;
        return;
    }

    if(x==0 && y==0){
        cout<<-1<<endl;
        return;
    }

    if((n-1)%x!=0){
        cout<<-1<<endl;
        return;
    }

    int k=0;
    k+=2;
    for(int i=0;i<=n-2;){
        for(int j=0;j<x;j++){
            cout<<k<<" ";
            i++;
        }
        k += x;
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