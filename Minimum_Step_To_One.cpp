#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[20000000]={0};

int minStep(int n){
    if(arr[n]!=0){
        return arr[n];
    }
    else if(n==1){
        arr[n]=0;
        return arr[n];
    }
    else{
        int a = INT_MAX,b=INT_MAX,c=INT_MAX;
        if(n%2==0){
            a = 1 + minStep(n/2);
        }
        if(n%3==0){
            b = 1 + minStep(n/3);
        }
        c = 1 + minStep(n-1);
        arr[n] = min(a,min(b,c));
        return arr[n];
    }
}

void solution(){
    int n;
    cin>>n;
    cout<<minStep(n)<<endl;
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}