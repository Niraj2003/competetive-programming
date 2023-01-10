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
    
    map<int,int>m;
    
    int x,d;
    vector<int> a[n];
    
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>d;
            m[d]++;
            a[i].push_back(d);
        }
    }

    for(int i=0;i<n;i++){
        bool f = true;
        for(int j=0;j<a[i].size();j++){
            if( 2 > m[a[i][j]] ) {
                f = false;
            }
        }
        if(f==true){
            cout<<"Yes"<<endl;
            return;
        }
    }

    cout<<"No"<<endl;
    return;


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