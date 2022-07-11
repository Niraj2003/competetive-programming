#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;

    int d1 = abs(x1-x2);
    int d2 = abs(y1-y2);


    if( (d1==0 && (d2==2 || d2==4) )|| (d1==1 && (d2==1 || d2==3)) || (d1==2 && (d2==0 || d2==4)) || (d1==3 && (d2==1 || d2==3)) || (d1==4 && (d2==0 || d2==2))){
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