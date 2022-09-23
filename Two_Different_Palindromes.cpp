#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int x,y;
    cin>>x>>y;

    if(x%2==1 && y%2==1){
        cout<<"No"<<endl;
        return;
    }
    if( min(x,y)==1){
        cout<<"No"<<endl;
        return;
    }
    else{
        cout<<"Yes"<<endl;
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