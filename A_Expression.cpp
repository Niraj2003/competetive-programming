#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int a,b,c;
    cin>>a>>b>>c;

    int p1 = a+b+c;
    int p2 = a+(b*c);
    int p3 = (a+b)*c;
    int p4 = a*(b+c);
    int p5 = (a*b)+c;    
    int p6 = a*b*c;


    cout<< max({p1,p2,p3,p4,p5,p6}) <<endl;
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}