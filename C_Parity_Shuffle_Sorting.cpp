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
    int k = 0;
    vector<pair<int,int>>v;
    for(int i=1;i<n;i++){
        if( (a[i]+a[i-1]) %2 !=0){
            if(i!=0 && i-1!=0){
                v.push_back({i-1,i});
                k++;i++;
            }
        }
    }
    cout<<k<<endl;
    for(auto a:v){
        cout<<a.first<<" "<<a.second<<endl;
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