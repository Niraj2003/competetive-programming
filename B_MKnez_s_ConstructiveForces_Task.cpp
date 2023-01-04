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
    if(n==3){
        cout<<"NO"<<endl;
        return;
    }

    if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n/2;i++){
            cout<<1<<" "<<-1<<" ";
        }
        cout<<endl;
        return;
    }   
    else{
        int k = n-2;
        int p = k/2, q = (k+1)/2;
        cout<<"YES"<<endl;
        while(true){
            cout<<p<<" ";
            n--;
            if(n==0){
                cout<<endl;
                return;
            }
            cout<<-q<<" ";
            n--;
            if(n==0){
            cout<<endl;
                return;
            }
        }
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