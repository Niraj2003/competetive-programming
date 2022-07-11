#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    // if(a==b){
    //     cout<<0<<endl;
    //     return;
    // }

    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (i < n - 1 && a[i + 1] == b[i] && a[i] == b[i + 1])
                cost++, i++; // single flip
            else
                cost++; // last one
        }
    }
    cout << cost << endl;   
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}