#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();

    vector<int>p = {1,2,3,0};
    vector<int>q = {1,3,0,2};
    vector<int>r = {2,3,1,0};
    vector<int>s = {2,0,3,1};
    vector<int>t = {3,2,0,1};
    vector<int>u = {3,0,1,2};

    vector<int>a;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    if(a==p || a==q || a==r || a==s || a==t || a==u){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

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