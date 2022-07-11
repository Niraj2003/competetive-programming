#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,k;
    cin>>n>>k;
    int a=1;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[j][i]=a;
            a++;
        }
    }
    if(n==1){
        cout<<"No"<<endl;
        return;
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int ans1 = 0;
    for(int i=1;i<n;i++){
        ans1 = ans1 + arr[i][0];
    }
    for(int i=1;i<n-1;i++){
        ans1 = ans1 + arr[n-1][i];
    }

    int ans2 = 0;
    for(int i=1;i<n;i++){
        ans2 = ans2 + arr[0][i];
    }
    for(int i=1;i<n-1;i++){
        ans2 = ans2 + arr[i][n-1];
    }

    if(ans1%2==k || ans2%2==k){
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}