#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

bool contains(string s, char a, char b){
    for(int i=0;i<s.length();i++){
        if(s[i]==a && s[i+1]==b){
            return true;
        }
    }
    return false;
}

void solution(){
    fast_cin();
    string s;
    cin>>s;

    for(int i=1;i<s.length();i++){
        if(s[i-1]=='b' && s[i]=='a'  ||  s[i-1]=='c' && s[i]=='b' ){
            swap(s[i],s[i-1]);
        }
    }

    cout<<s<<endl;

}

int main(){
    fast_cin();
    solution();
    return 0;
}