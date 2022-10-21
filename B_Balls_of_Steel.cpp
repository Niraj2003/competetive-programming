#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(auto a:v){
        int f = 0;
        for(auto b:v){
            if(a!=b){
                int p= a.first,q=a.second,r=b.first,s=b.second;
                int d = abs(r-p) + abs(s-q);
                if( d > k ){
                    f = -1;
                }
            }
        }
        if(f == 0){
            cout<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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