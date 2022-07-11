#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int dif = 0;
    int f = 1;
    for(int i=0;i<n;i++){
        if (b[i] > 0)
            f = 0;
    }

    if (f){
        cout << "YES\n";
        return;
    }

    for(int i=0;i<n;i++){
        if (a[i] > 0 && b[i] > 0){
            dif = a[i] - b[i];
        }
        if (a[i] < b[i]){
            cout << "NO\n";
            return;
        }
    }
    for(int i=0;i<n;i++){
        if (a[i] <= dif)
            a[i] = 0;
        else
            a[i] -= dif;
    }

    for(int i=0;i<n;i++){
        if (a[i] != b[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}