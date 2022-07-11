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
    
    // if(n==1){
    //     cout<<"YES"<<endl;
    //     return;
    // }

    int minimum = arr[0],maximum = arr[0];
    int f = 1;

    for(int i=1;i<n;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
        else if(arr[i] > maximum){
            maximum = arr[i];
        }

        if(arr[i] == minimum || arr[i] == maximum){

        }
        else{
            f = 0;
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