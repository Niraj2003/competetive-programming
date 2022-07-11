#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    string s;
    cin>>n>>s;
    reverse(s.begin(),s.end());
    
    cout<<s;
    for(int i=0;i<n;i++){
        cout<<0;
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