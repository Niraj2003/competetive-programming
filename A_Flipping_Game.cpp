#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int arr[100];

int count(int a,int b){
    int ct = 0;
    for(int i=0;i<a;i++){
        if(arr[i]==1){
            ct++;
        }
    }
    for(int i=a;i<=b;i++){
        if(arr[i]==0){
            ct++;
        }
    }
    for(int i=b+1;i<n;i++){
        if(arr[i]==1){
            ct++;
        }
    }
    return ct;
}

void solution(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mx = INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // change(i,j);
            int x = count(i,j);
            // cout<<x<<" ";
            if(x > mx){
                mx = x;
            }
        }
    }

    cout<<mx<<endl;
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}