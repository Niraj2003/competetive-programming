#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
    while(true){
        // string ans = "";
        if(s.length()==1){
            break;;
        }
        for(int i=0;i<s.length()-1;i++){
            if(s.length()==1){
                break;;
            }
            else if(s[i]=='0' && s[i+1]=='1'){
                s[i]='1';
                s.erase(i+1,1);
                // s[i+1] = '_';
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                s[i] = '0';
                s.erase(i+1,1);
                // s[i+1] = '_';
            }
        }
    }
    return s.length()==1;
}

void solution(){
    // int n;
    // string s;
    // cin>>n>>s;
    // set<string>se;
    cout<<check("00")<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-1;j++){
    //         string s1 = s.substr(i,j);
    //         if(check(s1)){
    //             se.insert(s1);
    //         }
    //     }
    // }

    // cout<<se.size()<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}