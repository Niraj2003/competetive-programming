#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string s;
    cin >> s;

    int x;
    cin >> x;

    int a = x / 60, b = x % 60;
    int c = 10 * (s[0] - '0') + (s[1] - '0');
    int d = 10 * (s[3] - '0') + (s[4] - '0');

    string str = "";
    str += s[0];
    str += s[1];
    str += s[3];
    str += s[4];

    // cout<<str<<" ";
    int answer = 0;

    if (str[0] == str[3] && str[1] == str[2])
        answer += 1;

    string s1 = str;

    while (1) {
        c += a;
        d += b;
        c += d / 60;
        d %= 60;
        c %= 24;
        str = "";

        if (c / 10 == 0)
            str += '0';

        str += to_string(c);
        if (d / 10 == 0)
            str += '0';

        str += to_string(d);

        if (str == s1) {
            break;
        }

        if (str[0] == str[3] && str[1] == str[2])
            answer += 1;

    }
    
    cout<<answer<<endl;

}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}