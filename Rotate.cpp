#include <bits/stdc++.h>
using namespace std;
#define ll long long

int* solution(int *arr, int n){
    // Code
    for(int i=0;i<(n)/2;i++){
        int temp = arr[i];
        arr[i] = arr[(n+1)/2 +i];
        arr[(n+1)/2+i] = temp;
    }
    return arr;
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solution(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}