#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;

    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int>v1;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }

    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        a = a + v[i][0];
        b = b + v[i][1];
        c = c + v[i][2];
    }

    // cout<<a<<" "<<b<<" "<<c<<" ";
    
    if(a==0 && b==0 && c==0 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}