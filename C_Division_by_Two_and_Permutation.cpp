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
    
    for(int i=0;i<n;i++){
        while(arr[i] > n){
            arr[i] = arr[i]/2;
        }
    }

    
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++){
        while(arr[i] > i+1){
            arr[i] = arr[i]/2;
        }
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i] !=i+1){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}