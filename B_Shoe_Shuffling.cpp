#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    // map<int,int>mp;
    // for(int i=0;i<n;i++){
    //     mp[s[i]]++;
    // }
    int ct=0;
    // for(auto m : mp){
    //     if(m.second == 1){
    //         ct++;
    //         return;
    //     }
    // }
    sort(s,s+n);
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ct++;
        }
    }
    if(ct!=n-1){
        cout<<-1<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(i != s[i]){
            if(i==0)
                s[i]=n;
            else
                s[i]=i;
        }
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
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