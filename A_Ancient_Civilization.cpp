#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<l;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j]& (1<<i))
                cnt++;
        }
        if(cnt > n-cnt){
            ans += 1<<i;
        }
    }
    cout<<ans<<endl;

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}