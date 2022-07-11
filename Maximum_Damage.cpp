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
    int ans[n];
    ans[0] = arr[0]&arr[1];
    ans[n-1] = arr[n-1]&arr[n-2];
    for(int i=1;i<n-1;i++){
        ans[i] = max(arr[i]&arr[i-1], arr[i]&arr[i+1]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}