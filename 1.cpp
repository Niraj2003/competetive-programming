#include <bits/stdc++.h>
using namespace std;

int myfun(int a){
    if(a==0){
        return -1;
    }

    else if(a>0){
        a--;
        return myfun(a)+1;
    }

    else{
        return 1;
    }
}

int main(){

    cout<<myfun(3)<<endl;
    
    return 0;
}