#include <bits/stdc++.h>
using namespace std;
#define ll long long
stack<int>st;
void solution(){
    int temp;
    cin>>temp;
    
    if(temp == 1)
    {
        ll n;
        cin>>n;
        st.push(n);
    }
    if(temp == -1)
    {
        if(!st.empty())
        {
            ll ans = st.top();
            cout<<ans<<endl;
            st.pop();
        }
        else
        {
            cout<<"kuchbhi?"<<endl;
        }
    }


}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}