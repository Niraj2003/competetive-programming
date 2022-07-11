#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s;
    while(cin>>s){
        int cnt = 0;
        for(int i = 0 ; i<(s.size()) ; i++){
            if(s[i]>='A'&&s[i]<='Z')
                cnt++;
        }
        if(cnt == s.size()){
            for(int i = 0 ; i<(s.size()) ; i++){
                s[i]=s[i]-'A'+'a';
            }
            cout<<s<<endl;
        }
        else if(s[0]>='a'&&s[0]<='z'&&cnt == s.size()-1){
            for(int i = 0 ; i<(s.size()) ; i++){
                if(s[i]>='a'&&s[i]<='z'){
                    s[i]=s[i]-'a'+'A';
                }
                else s[i]=s[i]-'A'+'a';
            }
            cout<<s<<endl;
        }
        else cout<<s<<endl;
    }
}

int main(){
    ll t = 1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}