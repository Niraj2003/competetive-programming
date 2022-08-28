#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    string s1,s2;
    cin>>s1>>s2;
    map<char,int>m;
    m[s1[0]]++;
    m[s1[1]]++;
    m[s2[0]]++;
    m[s2[1]]++;

    if(m.size()==4){
        cout<<3<<endl;
    }
    else if(m.size()==2){
        cout<<1<<endl;
    }
    else if(m.size()==3){
        cout<<2<<endl;
    }
    else if(m.size()==1){
        cout<<0<<endl;
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