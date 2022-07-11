#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int ones=0,twos=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
            ones++;
        else
            twos++;
    }

    if((ones % 2==1 || (ones == 0 && twos % 2==1))){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}