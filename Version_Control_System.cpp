#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,m,k,c1,c2,num;
    cin>>n>>m>>k;

    c1=0;
    c2=0;
    unordered_set<int>uset1;
    unordered_set<int>uset2;
    for(int i=0;i<m;i++){
        cin>>num;
        uset1.insert(num);
    }
    for(int i=0;i<k;i++){
        cin>>num;
        uset2.insert(num);
    }
    for(int i=1;i<=n;i++){
        if(uset1.find(i)!=uset1.end() && uset2.find(i)!=uset2.end()){
            c1++;
        }
        if(uset1.find(i)==uset1.end() && uset2.find(i)==uset2.end()){
            c2++;
        }
    }
    cout<<c1<<" "<<c2<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}