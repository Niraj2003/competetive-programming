#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    while(!v.empty()&& v.back()==0)
        v.pop_back();
 
    if(v.size()==0){
        cout<<"Yes"<<endl;
        return;
    }
 
    if(v.size()==1){
        cout<<"No"<<endl;
        return;
    }
 
    if(v[0]<=0 || v.back()>0){
        cout<<"No"<<endl;
        return;
    }
 
    ll prev=0;
    for(ll i=v.size()-1;i>0;i--){
        prev=prev-v[i];
        if(prev<=0){
        cout<<"No"<<endl;
        return;
        }
    }
    prev-=v[0];
    if(prev==0)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}