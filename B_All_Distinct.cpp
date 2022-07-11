#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int answer;
    cin>>answer;
    
    int p = answer;
    vector<int>v;
    set<int>s;
    map<int,int>mp;

    for(int i=0;i<answer;i++){
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
        s.insert(x);
        
    }

    v.assign(s.begin(), s.end());

    for (int i = 0; i < v.size(); i++) {
        answer -=  (mp[v[i]] - 1);
    }

    if ((p - answer) % 2 != 0){
        answer -= 1;
    }

    cout << answer <<endl;;
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}