#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;


void solution(){
    fast_cin();
    int n;
    cin>>n;

    int v[n], b[n], temp[n];
    string arr2[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){

        cin>>b[i]>>arr2[i];
        string s1 = arr2[i];

        for(int j=0;j<s1.length();j++ ){
            if(s1[j]=='U'){
                if(v[i] >0 ) 
                    v[i]--;
                else if(v[i] == 0) 
                    v[i] = 9;
            }
            else if(s1[j]=='D'){
                if(v[i] == 9) 
                    v[i] = 0;
                else if(v[i] >=0 ) 
                    v[i]++;
            }
        }        

    }



    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;



}

int main(){
    fast_cin();
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}