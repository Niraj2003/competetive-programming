#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int t = 3*n;
    map<string,int>m;
    while (t--){
        string s;
        int a;
        cin>>s>>a;
        m[s] += a;
    }
    vector<int>v;
    for(auto x:m){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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