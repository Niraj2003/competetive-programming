#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solution(){
    int a=0;
    string s;
    cin>>s;

    set<char> se;

    for(int i=0;i<s.length();i++){
        se.insert(s[i]);
        if(se.size() > 3){
            i--;
            a++;
            se.clear();
        }
    }

    cout<< a + ( (se.size()+2)/3 )<<endl;
    
}

int main(){
    ll t =1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}