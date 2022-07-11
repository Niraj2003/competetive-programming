#include <bits/stdc++.h>
using namespace std;
#define ll long long

int arr[200][200];

int count(int i,int j,int n,int m){
    int sum=0;
    int p = i, q = j;
    while (p>=0 && q>=0 && p<n && q<m){
        sum = sum + arr[p][q];
        p++;q++;
    }
    p = i, q = j;
    while (p>=0 && q>=0 && p<n && q<m){
        sum = sum + arr[p][q];
        p++;q--;
    }
    p = i, q = j;
    while (p>=0 && q>=0 && p<n && q<m){
        sum = sum + arr[p][q];
        p--;q++;
    }
    p = i, q = j;
    while (p>=0 && q>=0 && p<n && q<m){
        sum = sum + arr[p][q];
        p--;q--;
    }

    sum= sum -3*arr[i][j];

    return sum;
    
}

void solution(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>anss;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int ans = count(i,j,n,m);
            anss.push_back(ans);
        }
    }
    sort(anss.rbegin(),anss.rend());
    cout<<anss[0]<<endl;

}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}