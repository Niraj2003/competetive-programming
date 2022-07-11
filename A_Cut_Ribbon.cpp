#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++){
            int k=n-i*a-j*b;
            if(k>=0 && k%c==0 && ans<i+j+k/c)
                ans=i+j+k/c;
        }
    cout<<ans<<endl;
    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}