#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int flag =0;
    vector<int>v1;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            v1.push_back(arr[i]);
        }
        mp[arr[i]]++;
    }

    if (mp[0] > 1) {
        v1.push_back(0);
        v1.push_back(0);
    }
    else{
        v1.push_back(0);
    }

    if (v1.size() > 6) {
        cout << "NO"<<endl;
        return;
    }

    int a = v1.size();
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
        for (ll k = j + 1; k < n; k++) {
            if ((mp[v1[i] + v1[j] + v1[k]]) == 0) {
            cout << "NO"<<endl;
            return;
            }
        }
        }
    }
    
    cout << "YES"<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}