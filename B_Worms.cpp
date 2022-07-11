#include<bits/stdc++.h>
using namespace std;
int n,a,m,i,x=1,b[1000005];

int main (){
    int n;cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        while(a--){
            b[x]=i;x++;
        }
    }
    cin>>m;
    while(m--){
        cin>>a;
        cout<<b[a]<<endl;
    }
}
