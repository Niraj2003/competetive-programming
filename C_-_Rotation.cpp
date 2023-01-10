#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        int t,k;
        cin>>t>>k;
        if(t==1){
            while(k--){
                s = s[s.length()-1] + s;
                s.erase(s.begin()+s.length()-1);
                // cout<<s<<" ";
            }
            // cout<<endl;
        }
        else if(t==2){
            cout<<s[k-1]<<endl;
        }
    }

}

int main(){
    fast_cin();
    solution();
    return 0;
}