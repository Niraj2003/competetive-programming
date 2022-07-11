#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){

    int a,b;
    cin>>a>>b;

    string ans = "";

    if(a<=b){
        int i=0,j=0;
        while(i<a){
            ans += "10";
            i++;
        }
        
        while(j<abs(a-b)){
            ans += "1";
            j++;
        }
    }
    else{
        int i=0,j=0;
        while(i<b){
            ans += "01";
            i++;
        }
        
        while(j<abs(a-b)){
            ans += "0";
            j++;
        }

    }

    cout<<ans<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}