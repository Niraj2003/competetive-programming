#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution(){
    fast_cin();

    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int q=b.length()-1;
    int p=a.length()-1;

    for(p,q; p>=0,q>=0; p--,q--){
        if(a[p]==b[q]){
            //Nothing
        }
        else{
            break;
        }
    }

    bool flag=0;
    if(q==0){
        while(p > -1){
            if(a[p]!=b[q]){
                //
            }
            else{
                flag=1;
            }
            p--;
        }
        if(flag!=0)
            cout<<"YES\n";
        else 
            cout<<"NO\n";

        return;
    }

    if(q <= -1){
        cout<<"YES\n";
        return;
    }   

    if(q >= 1){
        cout<<"NO\n";
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