#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=1;
    while(k>0){
        if(i == n-1){
            break;
        }
        swap(s[n-i],s[n-i-1]);
        i++;
        k--;
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans = ans + (s[i]-'0')*10 + (s[i+1]-'0');
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