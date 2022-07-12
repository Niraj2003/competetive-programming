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
    string arr[n];
    map<string,int>mp;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=1;
    }
    int ans[n] ={0};
    bool f;
    for(int i=0;i<n;i++){ 
        bool f = false; 
        
        for(int j = 0;j < arr[i].size();j++){ 

            string temp1 = arr[i].substr(j,arr[i].size());
            string temp2 = arr[i].substr(0,j);

            if( mp[temp1]==1 && mp[temp2] ==1 ){ 
                f = true; 
                break; 
            } 

        } 
        if(f==true) {
            ans[i] = 1; 
        }
        else{
            ans[i] = 0; 
        }
    } 
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    cout << endl; 

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