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

    int a[n+2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=0;
    }

    unordered_map<int,vector<int>>mp;
    for(int i=1;i<=n;i++){
        mp[a[i]].push_back(i);
    }

    for(auto tp:mp){
        int x = 0;
        int i=0;
        for(i = 1; i < tp.second.size(); i++){
            int temp = tp.second[i] - 1 - tp.second[i - 1] ;
            if(temp%2==0){
                x++;
            }
            else{
                continue;
            }
        }
        ans[tp.first-1] = x + 1;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

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