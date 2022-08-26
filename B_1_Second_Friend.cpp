#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    ll r,c;
    cin>>r>>c;

    ll trees =0;

    char a[r][c];
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j] == '^'){
                trees++;
            }
        }
    }

    if( (trees!=0  && r== 1)  || (trees!=0 && c==1) ){
        cout<<"Impossible"<<endl;
        return;
    }

    else if( (r==1 && trees==0) || ( c==1 && trees==0)){
        cout<<"Possible"<<endl;
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        return;
    }
    else {
        cout<<"Possible"<<endl;
        if(true){
            for(ll i=0;i<r;i++){
                for(ll j=0;j<c;j++){
                    a[i][j]= '^';
                }
            }
        }

        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    ll x = 1;
    while(t--){
        cout<<"Case #"<<x<<": ";
        solution();
        x++;

    }
    return 0;
}