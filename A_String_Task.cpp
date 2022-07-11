#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    char S;
    while(cin>>S)
        if(!strchr("AEIOUYaeiouy",S))
            cout<<'.'<<(char)tolower(S);

    return 0;
}