#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            ans = min(ans, abs(i+1 - arr[i]));
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