#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,m;
    cin>>n>>m;

    int arr[m];
    unordered_map<int,int>mp;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

int tim = 0;
    while(n>0)
    {
      
      
      if(tim%2==1)
      {
        n = n-m;
        
        for(int i=1;i<=m;i++)
          {
            if(mp[i]!=0)
            {
              mp[i]--;
              
            }
          }
        
      }
      
      
      else
      {
        
        for(int i=1;i<=m;i++)
        {
          if(mp[i]!=0)
          {
            mp[i]--;
            n--;
          }
        }
      }
        
      
      
      tim++;
    }
    
    cout<<tim<<endl;  

    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}