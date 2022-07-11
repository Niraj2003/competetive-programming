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
    int odds=0,evens=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            odds++;
        }
        else{
            evens++;
        }
    }
    cout<< min(odds,evens) <<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}