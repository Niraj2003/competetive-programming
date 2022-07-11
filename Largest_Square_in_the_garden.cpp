#include <bits/stdc++.h>
using namespace std;
#define ll long long
// const int N = 1e6;


void solution(){
    int n;
    cin>>n;

    int a,b;
    int g[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            g[i][j] = 1;
        }
    }

    int temp[2][n], maxx = 0;

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = 0;
        }
    }    
  
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            int x = g[i][j];
            if(x==1)
                if(j>0)
                    x = 1 + min(temp[1][j - 1], min(temp[0][j - 1], temp[1][j]));
  
            temp[0][j] = temp[1][j];
            temp[1][j] = x;  
            maxx = max(maxx, x);
        }
    }

    cout<<maxx<<endl;
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}