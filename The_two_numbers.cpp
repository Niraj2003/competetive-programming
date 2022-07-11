#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin >> n;
    if(n==2){
        cout<<0<<endl;
        return;
    }
    
    if(n%2==1){
        int a = n/2 * (n/2 + 1 );
        cout<<a-1<<endl;
    }
    else{

        if((n/2)%2==0){
            int a = (n/2 - 1) * (n/2 + 1 );
            cout<<a-1<<endl;
        }
        else{
            int a =(n/2 - 2) * (n/2 + 2 );
            cout<<a-1<<endl;
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