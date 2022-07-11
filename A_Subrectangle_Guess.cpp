#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int maxi = INT_MIN;
    int r=-1,c=-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

            if(arr[i][j] > maxi){
                c=j;
                r=i;
                maxi=arr[i][j];
            }
        }
    }
    
    if(m==n && m==1 && n==1){
        cout<<'1'<<endl;
    }
    else{
        if(m!=1 && n!=1 )
            cout<< max(c+1,m-c) * max(r+1,n-r) <<endl;
        else{
            cout<< max(c+1,m-c) * max(r+1,n-r) <<endl;
        }
    }
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}