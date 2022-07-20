#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

bool ispal(string s){
    string s1 = s;
    reverse(s.begin(),s.end());
    return s1==s;
}

void solution(){
    fast_cin();
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ct0 =0 ,ct1 =0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ct0++;
        }
        else{
            ct1++;
        }
    }

    if(ispal(s)){
        cout<<s<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        if(!ispal(s)){
            cout<<s<<" ";
            s.erase(i,1);
            cout<<s<<" ";
        }
        else{
            cout<<s<<endl;
        }
    }
    cout<<endl;

    // if(ct0==0 || ct1==0){
    //     cout<<s<<endl;
    //     return;
    // }

    // if(ct1==ct0){
    //     for(int i=0;i<ct1/2;i++){

    //     }
    // }

    // if(ct0 >ct1){
    //     for(int i=0;i<ct0;i++){
    //         cout<<0;
    //     }
    //     cout<<endl;
    // }

    // else{
    //     for(int i=0;i<ct1;i++){
    //         cout<<1;
    //     }
    //     cout<<endl;
    // }



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