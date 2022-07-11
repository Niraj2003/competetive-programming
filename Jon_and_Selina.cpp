#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s;
    cin>>s;

    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    for(auto a:m){
        if(a.second%2==1){
            cout<<a.first<<endl;
            return;
        }
    }

    cout<<-1<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}