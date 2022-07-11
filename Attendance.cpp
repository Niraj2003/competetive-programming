#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    unordered_map<string,int>m;
    string first[n],last[n];
    for(int i=0;i<n;i++){
        cin>>first[i]>>last[i];
        m[first[i]]++;
    }

    for(int i=0;i<n;i++){
        if(m[first[i]] > 1){
            cout<<first[i]<<" "<<last[i]<<endl;
        }
        else{
            cout<<first[i]<<endl;
        }
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