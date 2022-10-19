#include <bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin>>s;
    int ct = 0;
    set<string>se;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=s.length()-i;j++){
            string k = s.substr(i,j);
            se.insert(k);
            cout<<k<<" ";
            // if(k.length()%2==1){
            //     ct++;
            // }
        }
    }
    cout<<endl;
    for(auto a:se){
        // cout<<a<<" ";
        if(a.length()%2==1){
            ct++;
        }
    }
    cout<<ct<<endl;

    return 0;
}