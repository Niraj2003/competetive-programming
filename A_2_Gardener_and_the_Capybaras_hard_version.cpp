#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    string s;
    cin>>s;
    int p = 0, q = s.length()-1;
    int x = 0, y = s.length()-1;

    for(int i=1;i<s.length();i++){
        if(s[i] >= s[p]){
            p = i;
            break;
        }
    }
    for(int i=s.length()-1;i>=p;i--){
        if(s[q] <= s[i-1]){
            q = i-1;
            break;
        }
    }

    for(int i=1;i<s.length();i++){
        if(s[i] <= s[x]){
            x = i;
            break;
        }
    }
    for(int i=s.length()-1;i>=x;i--){
        if(s[y] >= s[i-1]){
            y = i-1;
            break;
        }
    }

    // cout<<p<<" "<<q<<" "<<x<<" "<<y<<" "<<endl;

    if(p!=0 && q!=s.length()-1){
        cout<<s.substr(0,p)<<" ";
        cout<<s.substr(p,q-p+1)<<" ";
        cout<<s.substr(q+1,s.length())<<endl;
        return;
    }

    if(x!=0 && y!=s.length()-1){
        cout<<s.substr(0,x)<<" ";
        cout<<s.substr(x,y-x+1)<<" ";
        cout<<s.substr(y+1,s.length())<<endl;
        return;
    }

    else{
        cout<<":("<<endl;
        return;
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