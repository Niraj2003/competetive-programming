#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool IsPowerOfTwo(int x){
    return (x & (x - 1)) == 0;
}

vector<ll>v;

int fun(){
    for(int i=0;i<100;i++){
        v.push_back(pow((ll)2,i)-1);
    }
}

int highestPowerOfTwo(int num){
    // Converting number to string
    string s = to_string(num);
 
    // Traverse the array
    for (int i = 0; i < (int)s.size();
         i++) {
 
        if (s[i] == '0') {
            cout << "0";
            continue;
        }
 
        // Calculate log base 2
        // of the current digit s[i]
        int lg = log2(int(s[i]) - 48);
 
        // Highest power of 2 <= s[i]
        int p = pow(2, lg);
 
        // ASCII conversion
        return char(p + 48);
    }
}

void solution(){
    int n,k;
    cin>>n>>k;

    if(n==1){
        cout<<__builtin_popcount(k);
        return;
    }

    int a = 0,i=0;
    int ans = 0;
    cout<<highestPowerOfTwo(k);
    while(a<k || i<n-1){
        k = k - v[i];
        ans = ans + __builtin_popcount(v[i]);
        cout<<ans<<" ";
        i++;
    }
    

    k = k - a;
    ans = ans + __builtin_popcount(k);

    cout<<ans<<endl;



    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}