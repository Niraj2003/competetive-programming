#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    for(auto a:mp){
        if(a.first!=a.second && a.second%a.first!=0){
            cout<<"NO"<<endl;
            return ;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}