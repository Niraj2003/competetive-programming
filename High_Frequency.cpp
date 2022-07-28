#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

static bool cmp(pair<int,int>a , pair<int,int>b){
    return a.second > b.second ; 
}

void solution(){
    fast_cin();
    int n;
    cin>>n;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    vector<int>v;
    int x = INT_MIN;
    for(auto a:m){
        if(a.second > x){
            x = a.second ;
        }
        v.push_back(a.second);
    }
    v.erase(find(v.begin(),v.end(),x));
    int p = x/2;
    int q = x - x/2;
    v.push_back(p);
    v.push_back(q);
    sort(v.rbegin(),v.rend());
    cout<<v[0]<<endl;

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