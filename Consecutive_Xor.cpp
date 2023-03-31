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
    vector<int>v(n);
    int d = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        d = d ^ v[i];
    }

    if(n%2!=0){
        cout<<"YES"<<endl;
        return;
    }

    else{
        if(d==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

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