#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    char chess[9][9];

    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>chess[i][j];
        }
    }

    for(int i=2;i<=7;i++){
        for(int j=2;j<=7;j++){
            if(chess[i][j] == '#' && chess[i+1][j+1]=='#' && chess[i+1][j-1] == '#' && chess[i-1][j+1] =='#' && chess[i-1][j-1]=='#'){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }

}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}