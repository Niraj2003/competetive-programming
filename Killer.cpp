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
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ct = 0;
    while(!is_sorted(v.begin(),v.end())){
        vector<int>temp;
        temp.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            if(v[i] < v[i-1]){
                continue;
            }
            temp.push_back(v[i]);
        }
        v=temp;
        ct++;
    }
    cout<<ct<<endl;

}

int main(){
    fast_cin();
    solution();
    return 0;
}