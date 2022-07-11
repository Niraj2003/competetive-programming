#include <bits/stdc++.h>
using namespace std;

int n,k;
// vector<int>v;

// void solve(){
//     int a,b;
//     cin>>a>>b;

//     int idx1=-1,idx2=-1;
//     for(int i=0;i<n;i++){
//         if(v[i] == a){
//             idx1 = i;
//         }
//     }
//     for(int i=idx1;i<n;i++){
//         if(v[i]==b){
//             idx2 = i;
//         }
//     }
//     cout<<a<<" "<<b<<"  ";
//     cout<<idx1<<" "<<idx2<<" ";
//     if(idx2 > idx1 && idx1!=-1 && idx2!=-1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

void solution(){

    map<int, pair<int,int>> mp;
    cin>>n>>k;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;
        if(mp[x].second <= i){
            mp[x].second = i+1;
        }

        if (mp[x].first == 0){
            mp[x].first = i + 1;
        }
    }

    for(int i=0;i<k;i++) {
        int a, b;
        cin >> a >> b;

        if ((mp[a].first < mp[b].second && mp[a].first > 0 && mp[b].second > 0  )) {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';

    }

    // while(k--){
    //     solve();
    // }    
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solution();
        // cout<<endl;
    }
    return 0;
}