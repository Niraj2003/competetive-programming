#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,x;
    cin>>n>>x;

    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }

    sort(v.rbegin(),v.rend());
    int ans1 = 0, ans2 = 0;

    for(int i=0;i<n;i++){
        if(v[i].second <= x ){
            ans1 = v[i].first;
            break;
        }
    }

    cout<<ans1<<endl;


    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}