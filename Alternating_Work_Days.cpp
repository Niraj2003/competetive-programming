#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    float x = (2*p)/a;
    float y = (2*q)/b;

    if ((p / a == (q / b) + 1 || (p / a == q / b) || (p / a + 1 == q / b)) && (p % a == 0) && (q % b == 0)){
        cout << "YES" << endl;
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