#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;


    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i] = a%10;
        mp[a%10]++;
    }

    mp[0] = min(mp[0],2);
    mp[1] = min(mp[1], 3);

    for(int i=2;i<10;i++){
        mp[i] = min(mp[i], 2);
    }

    vector<ll>ans;

    for (int i = 0; i < 10; i++) {
        while (mp[i]--){
            ans.push_back(i);
        }
    }
    
    

    for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size();j++){
            for(int k=j+1;k<ans.size();k++){
                if((ans[i]+ ans[j] + ans[k])%10 == 3){                    
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }

    cout<<"NO"<<endl;

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}