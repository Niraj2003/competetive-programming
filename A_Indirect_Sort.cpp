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
    int a[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(a[1]==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    // if(is_sorted(a,a+n)){
    //     cout<<"Yes"<<endl;
    //     return ;
    // }
    // // else{
    // //     cout<<"No"<<endl;
    // // }
    // for(int i=1;i<=n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         for(int k=j+1;k<=n;k++){
    //             if(a[i]>a[k] && a[i]!=i){
    //                 a[i] = a[i] + a[j];
    //             }
    //             else if(a[i]>a[k] && a[i]==i){
    //                 //Nothing
    //             }
    //             else if(a[j]==j){
    //                 //Nothing
    //             }
    //             else{
    //                 swap(a[j],a[k]);
    //             }
    //             // for(int f=1;f<=n;f++){
    //             //     cout<<a[f]<<" ";
    //             // }
    //             // cout<<endl;
    //         }
    //     }
    // }
    // if(is_sorted(a,a+n)){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }


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