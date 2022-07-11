#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<char>v;
    int h=0,t=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='.'){
            v.push_back(s[i]);
            if(s[i]=='H') h++;
            if(s[i]=='T') t++;
        }
    }
    int flag = 0;
    if(h!=t){
        flag=1;
    }

    for(int i=0;i<v.size();i+=2){
        if((v[i]=='H' && v[i+1]=='T') ){

        }
        else{
            flag = 1;
            break;
        }
    }

    if(flag==0){
        cout<<"Valid"<<endl;   
    }
    else{
        cout<<"Invalid"<<endl;
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