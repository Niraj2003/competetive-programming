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
    vector<int>v;
    if(n<5){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i+=2){
        v.push_back(i);
    }
    for(int i=2;i<=n;i+=2){
        v.push_back(i);
    }
    for(int i =0 ;i<n;i++){
        cout<<v[i]<<" ";
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