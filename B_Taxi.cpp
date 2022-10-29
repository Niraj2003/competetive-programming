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
    int k;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    a[1]=max(a[1]-a[3],0);
    cout<< a[3]+ a[4]+ (a[1]+2*a[2]+3)/4 <<endl;

}

int main(){
    fast_cin();
    ll t =1;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}