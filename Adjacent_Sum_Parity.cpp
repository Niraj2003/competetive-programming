#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    int b[n];
    for(int i=0;i<n;i++){
        b[i] = -1;
    }
    if(a[0]%2==0){
        b[0] = 0;
        b[1] = 0;
    }
    else{
        b[0] = 0;
        b[1] = 1;
    }
    for(int i=1;i<n-1;i++){
        if(a[i]%2==0){
            if(b[i]==1){
                b[i+1] = 0;
            }
            else{
                b[i+1] = 1;
            }
        }
        else{
            if(b[i]==1){
                b[i+1] = 0;
            }
            else{
                b[i+1] = 1;
            }
            
        }
    }
    if(((b[0] + b[n-1])%2)==(a[n-1]%2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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