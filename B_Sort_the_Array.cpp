#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp[i] = arr[i];
    }

    sort(temp,temp+n);
    // if(temp==arr){
        
    // }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=temp[i]){
            x = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=temp[i]){
            y = i;
            break;
        }
    }

    reverse(arr+x,arr+y+1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    if(is_sorted(arr,arr+n)){
        cout<<"yes"<<endl;
        cout<<x+1<<" "<<y+1<<endl;
        return;
    }
    else{
        cout<<"no"<<endl;
    }

    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}