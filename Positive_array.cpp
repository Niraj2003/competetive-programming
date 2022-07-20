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
    for (int i=0;i<n;i++) { 
        cin>>a[i]; 
    } 

    multiset<int> s; 

    for (int i=0;i<n;i++) { 
        s.insert(a[i]); 
    } 

    int res = 0, ptr = 0; 
    ptr++;res++;

    while (s.size()>0){ 
        auto it = s.lower_bound(ptr); 
        if (it!=s.end()){ 
            ptr++; 
            s.erase(it); 
        } 
        else{ 
            res++; 
            ptr = 1; 
        } 
    } 
    res++;

    cout<<res-1<<endl; 


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