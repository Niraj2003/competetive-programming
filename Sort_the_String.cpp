#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    string temp = s;
    sort(temp.begin(),temp.end());
    if(temp==s){
        cout<<0<<endl;
        return;
    }
    int ans= 0;
    for(int i=0 ;i<n-1;i++){
        if(s[i] == '1' && s[i+1] =='0'){
            ans++;
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