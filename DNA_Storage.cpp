#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s;
    int n;
    cin>>n>>s;

    for(int i=0;i<n;i=i+2){
        if(s[i]=='0' && s[i+1]=='0'){
            cout<<'A';
        }
        if(s[i]=='0' && s[i+1]=='1'){
            cout<<'T';
        }
        if(s[i]=='1' && s[i+1]=='0'){
            cout<<'C';
        }
        if(s[i]=='1' && s[i+1]=='1'){
            cout<<'G';
        }
    }
    cout<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}