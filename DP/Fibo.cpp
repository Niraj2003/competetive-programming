#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dp[10000];

int fibo(int n){

    if(dp[n]!=0){
        return dp[n];
    }

    if(n==1 || n==2){
        dp[n]=1;
        return dp[n];
    }

    

    dp[n]= fibo(n-1)+fibo(n-2);
    return dp[n];
}

int main(){
    ll t ;
    cin>>t;

    cout<<fibo(t);

    return 0;
}