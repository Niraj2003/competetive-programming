#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

void solution(){
    fast_cin();
    int n,temp=0;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,arr+n);

    int i = n-1;
    while(i >= 0 ){
        if(arr[i]%2!=0) 
            temp = temp ^ i;
        i--;
    }

    if(temp!=0) 
        cout<<("Chef")<<endl;
    else 
        cout<<("Cook")<<endl;

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