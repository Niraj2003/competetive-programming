#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    
    int n;
    cin>>n;
    if(n<=6){
        switch (n){
            case 3:
                cout<<"010"<<endl;
                break;
            
            case 4:
                cout<<"1001"<<endl;
                break;
            
            case 5:
                cout<<"01010"<<endl;
                break;
            
            case 6:
                cout<<"010010"<<endl;
                break;
            
            default:
                break;
        }
    }
    else{
        string s = "010";
        int x = n-6;
        for(int i=0;i<x;i++){
            s = s + '0';
        }
        s = s + "010";
        cout<<s<<endl;
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