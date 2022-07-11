#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    ll n;
    cin>>n;
    ll arr[n];

    ll a=0,d=0;
    priority_queue<int, vector<int>, greater<int>> priq;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        priq.push(arr[i]);
        a += arr[i];
    }

    ll ans = 0;
    while (priq.size()!=0){   
        ll temp = priq.top();
        a -= temp;
        d += (1000-temp); 
        ans = max(ans,a*d);
        priq.pop();
    }
    ll final_ans = ans;
    cout<<final_ans<<endl;
    
 
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}