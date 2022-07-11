#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    string s[n];
    unordered_map<string, int>mp;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(mp[s[i]]==0){
            mp[s[i]]++;    
            cout<<"OK"<<endl;    
        }
        else if(mp[s[i]]>0){
            mp[s[i]]++;
            s[i] += to_string(mp[s[i]]-1);
            mp[s[i]]++;
            cout<<s[i]<<endl;
        }
    }
    
}

int main(){
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}