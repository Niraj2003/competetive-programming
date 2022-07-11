#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[14] = { 4,7,44,77,47,74,444,477,447,474,744,777,747,774};

void solution(){
    int n;
    cin>>n;

    for(int i=0;i<14;i++){
        if(n%arr[i] ==0){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;

    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}