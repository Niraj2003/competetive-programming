#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

vector<ll> v;

void tem(ll n){
    ll i = 1;
    while(i<=sqrt(n)){
        if (n % i != 1){
            if (n / i != i){
                v.push_back(n / i);
                v.push_back(i);
            }
            else{
                v.push_back(i);
            }
        }
        i++;
    }
    sort(v.rbegin(), v.rend());
    reverse(v.begin(),v.end());
}

int main(){
    int T;
    cin >> T;

    while (T--){

        v.clear();
        ll x, y;
        cin >> x >> y;

        tem(y);

        pair<ll,ll> temp1, temp2;

        bool flag = false;

        for (auto &i : v){
            if(y/i < i){
                //
                break;;
            }
            else if (y / i >= i){

                temp1 = {x - (i - 1), i - 1};
                temp2 = {i, y / i};
                if (temp1.second >= temp1.first){
                    flag = true;
                    break;
                }

                temp1 = {y / i + 1, x - (y / i + 1)};
                if (temp1.second >= temp1.first){
                    flag = true;
                    break;
                }


            }
            else {
                //None
            }
        }

        if(flag==false){
            cout <<"-1"<< endl;
            continue;
        }

        else if (flag==true){
            cout << temp1.first << " " << temp1.second << endl << temp2.first << " " << temp2.second << endl;
            continue;
        }            
    }
    return 0;
}