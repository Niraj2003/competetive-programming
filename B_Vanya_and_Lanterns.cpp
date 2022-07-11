#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n,l,i,m;
    cin>>n>>l;
    int a[n];
	for(i=0;i<n;i++) 
        cin>>a[i];
	sort(a,a+n);

	m=max(a[0],l-a[n-1])*2;

	for(i=1;i<n;i++) 
        m=max(m,a[i]-a[i-1]);

	printf("%.10lf",m/2.0);
    
}

int main(){
    ll t=1 ;
    // cin>>t;
    while(t--){
        solution();
    }
    return 0;
}