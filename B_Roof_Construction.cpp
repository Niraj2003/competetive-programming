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
    vector<int>v(n,-1);
    v[n/2] = 0;
    for(int i=0,k=1;i<n/2;i++,k+=2){
        v[i] = k;
    }
    for(int i=n/2+1,k=2;i<n;i++,k+=2){
        v[i] = k;
    }
    for(auto a:v){
        cout<<a<<" ";
    }
    cout<<endl;

    //  1 3 5 0 6 4 2
    //  1 3 0 2 4
    // 0 8 9 7 

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