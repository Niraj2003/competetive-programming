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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t = 0;
    for(int i=0;i<n;i++){
        int k = i + pow(2,t);
        while(k <= n ){
            if( k <= n){
                a[i]--;
                a[k]++;
            }
            t++;
        }
    }

}

int main(){
    fast_cin();
    solution();
    return 0;
}