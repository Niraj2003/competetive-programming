#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll MOD = 1e9 + 7;

bool isSubsetSum(vector<int>&v, int n, int sum){
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
  
    if (v[n - 1] > sum)
        return isSubsetSum(v, n - 1, sum);

    return isSubsetSum(v, n - 1, sum) || isSubsetSum(v, n - 1, sum - v[n - 1]);

}

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
    int sum;
    cin>>sum;

    if(isSubsetSum(v,n,sum)){
        cout<<"Possible"<<endl;
    }
    else{
        cout<<"Not Possible"<<endl;
    }

    

}

int main(){
    fast_cin();
    solution();
    return 0;
}