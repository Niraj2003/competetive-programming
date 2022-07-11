#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;

    string s1,s2;
    cin>>s1>>s2;

    int ct=0;

    for(int i=0;i<n;i++){

        if(s2[i]=='1'){
            if(s1[i]=='0'){
                s1[i]='2';
                ct++;
            }
            else if(s1[i-1]=='1'){
                s1[i-1]=='0';
                s1[i-1]='2';
                ct++;
            }
            else if(s1[i+1]=='1'){
                s1[i+1]=='0';
                s1[i+1]='2';
                ct++;
            }
        }

    }

    cout<<ct<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}