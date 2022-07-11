#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int x,y;
    cin>>x>>y;

    int z= x^y;
    int a = 2^x;
    int b = (2^y);
    int c = (2^z);

    vector<int>ans;
    if(a%2==1){
        ans.push_back(a);
    }    
    if(b%2==1){
        ans.push_back(b);
    }    
    if(c%2==1){
        ans.push_back(c);
    }   
    ans.push_back(2);

    sort(ans.begin(),ans.end());
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
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