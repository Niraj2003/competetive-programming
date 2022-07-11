#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solution(){
    ll n;
    cin>>n;
    if(n%3==0){
        cout<<n/3 <<" "<< n - (n/3 + n/3 - 1)<<" "<<n/3 - 1<<endl;
        return;
    }
    else if(n%3==1){
        cout<<n/3 <<" "<< n - (n/3 + n/3 - 1)<<" "<<n/3 - 1 <<endl;
        return;
    }
    else{
        cout<<n/3+1<<" "<< n - (n/3 + n/3 )<<" "<<n/3-1<<endl;
        return;
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