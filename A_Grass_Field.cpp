#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int arr[2][2];
    int zeros=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                zeros++;
            }
        }
    }
    if(zeros==4 ){
        cout<<0<<endl;
        return;
    }
    if(zeros==0){
        cout<<2<<endl;
        return;
    }
    else{
        cout<<1<<endl;
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