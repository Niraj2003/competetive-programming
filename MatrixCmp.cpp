#include <iostream>
using namespace std; 
#include <vector>
int main(){
    int m,n;
    cin>>m>>n;
    vector<int> a,b,c;
    for(int i=0;i<m*n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m*n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<m*n;i++){
        int x;
        cin>>x;
        c.push_back(x);
    }
    int ct = 0;

    int p = m*n;
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            for(int k = 0;k<p;k++){
                if(a[i]==b[j] && b[j]==c[k]){
                    // cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<endl;
                    i++,j++,k++;
                    ct++;
                }
            }
        }
    }
    cout<<ct<<endl;

    return 0;
}
