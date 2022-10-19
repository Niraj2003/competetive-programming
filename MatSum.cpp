#include <bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    int a[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int x[m+n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i+j] = x[i+j] +  a[i][j];
        }
    }

    for(int i=0;i<m+n-1;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

    return 0;
}