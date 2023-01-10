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

    for(int i=0;i<s.length();i++){
        for(int j=s.length()-1;j>=i+1;j--){
            string x = s.substr(0,i+1);
            string y = s.substr(i+1,j-(i+1));
            string z = s.substr(j,s.length()-j);
            if(y >= x && y>=z){
                cout<<x<<" "<<y<<" "<<z<<endl;
                return;
            }
            if(y <= x && y<=z){
                cout<<x<<" "<<y<<" "<<z<<endl;
                return;
            }
        }
    }
    cout<<":("<<endl;


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