#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sol(string s1,string s2){
    int sum=0;
    for(int i=0;i<s1.length();i++){
        sum = sum + abs( s1[i]-'a'- (s2[i] - 'a'));
    }
    return sum;

}

void solution(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<int>answers;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                int ans = sol(s[i],s[j]);
                answers.push_back(ans);
            }
        }
    }
    sort(answers.begin(),answers.end());
    cout<<answers[0]<<endl;
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}