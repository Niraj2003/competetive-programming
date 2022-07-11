#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s;
    cin>>s;

    string str = "hello";
    int i=0,j=0;

    while(i<s.length()){

        if(s[i] == str[j]){
            if(str[j]=='o'){
                cout<<"YES"<<endl;
                return;
            }
            i++;
            j++;
        }
        else{
            i++;
        }
    }

    cout<<"NO"<<endl;
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}