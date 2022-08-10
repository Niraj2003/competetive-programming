#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n;
    cin>>n;
    int arr[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    vector<int>v;
    for(auto a:m){
        v.push_back(a.second);
    }
    sort(v.rbegin(),v.rend());

    map<int,int>mp;
    if(v.size()==1){
        cout<<"YES"<<endl;
        return;
    }

    if(v[0]!=v[1]){
        cout<<"YES"<<endl;
        return;
    }

    // for(int i=0;i<v.size();i++){
    //     mp[v[i]]++;
    //     // if(v[i]!=te){
    //     //     cout<<"YES"<<endl;
    //     //     return ;
    //     // }
    // }
    // for(auto a:mp){
    //     if(a.second > 1){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    cout<<"NO"<<endl;
    

}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}