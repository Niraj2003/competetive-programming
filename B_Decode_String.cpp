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
    string s;
    cin>>s;
    // vector<int>v;
    // int t = 0;
    // for(int i=0;i<s.length()-2;i++){
    //     if(s[i+2] == '0'){
    //         // cout<<s[i]-'0'*10<<" ";
    //         int x = ( (s[i]-'0') * 10) + (s[i+1]-'0');
    //         // cout<<x<<" ";
    //         i+=2;
    //         t=i;
    //         v.push_back(x);
    //     }
    //     else{
    //         // cout<<s[i]-'0'<<" ";
    //         v.push_back(s[i]-'0');
    //         t = i;
    //     }
    // }
    // while(t< s.length()){   
    //     v.push_back(s[t]-'0');
    //     t++;
    // }
    // string ans ="";
    // for(int i=0;i<v.size();i++){
    //     if(v[i]!=0){
    //         cout<<v[i]<<" ";
    //         ans += (v[i]+'a'-1);
    //     }
    // }
    // cout<<ans<<" ";
    // cout<<endl;
    vector<int>v;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
            int f = (s[i-1]-'0') + (s[i-2]-'0') *10 ;
            v.push_back(f);
            i -= 2;
        }
        else{
            v.push_back(s[i]-'0');
        }
    }
    string ans = "";
    for(int i=0;i<v.size();i++){
        // if(v[i]!=0){
        // cout<<v[i]<<" ";
        ans += (v[i]+'a'-1);
            // ans += (v[i]+'a'-1);
        // }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

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