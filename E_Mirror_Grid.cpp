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
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int arr1[n][n];
    // Rotate
    int ct = 0;
    while(true){
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                arr1[i][j] = arr[n-1-j][i];
            }
        }
        ct++;
        int counter = 0;
        
        while (counter != arr+n - arr && arr[counter] == arr1[counter]) {
            if (counter == (arr+n - arr) - 1) { 
                cout << ct << endl;
            }
            ++counter;
        }
    }
    


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