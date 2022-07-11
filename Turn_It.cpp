#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int u,v,a,s;
    cin>>u>>v>>a>>s;

    int t = pow(u,2) - (2*a*s);
    float ans = pow(t,0.5);
    // cout<<ans;
    if(ans > v){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}