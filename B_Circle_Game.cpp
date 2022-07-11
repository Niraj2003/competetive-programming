#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    int n;
    cin>>n;
    int arr[n];
    int m = INT_MAX;
    int pt=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<m){
            m=arr[i];
            pt=i;
        }
    }
    
    if(n==1){
        cout<<"Mike"<<endl;
        return;
    }
    
    pt+=1;

    if(n%2==0){
        if(pt%2==1){
            cout<<"Joe"<<endl;
        }
        else{
            cout<<"Mike"<<endl;
        }
    }
    else{
        if(pt%2==0){
            if(arr[pt]%2==1){
                cout<<"Joe"<<endl;
            }
            else{
                cout<<"Mike"<<endl;
            }
            
        }
        else{
            if(arr[pt]%2==1){
                cout<<"Mike"<<endl;
            }
            else{
                cout<<"Joe"<<endl;
            }
        }
    }


    // int mike=0,joe=0;
    // int a = 0;

    // //Mike chance
    // mike=1;joe=0;
    // arr[a]-=1;

    // // while(true){
    // //     if(mike==1){
    // //         //Joe chance
    // //         joe = 1;
    // //         mike=0;
    // //         a = a%n +1;
    // //         if(arr[a]==0){
    // //             break;
    // //         }
    // //         arr[a]-=1;
    // //         // if(arr[a]<0){
    // //         //     cout<<"Joe"<<endl;
    // //         //     return;
    // //         // }
    // //     }
    // //     else{
    // //         //Mike chance
    // //         mike=1;
    // //         joe=0;
    // //         a = a%n +1;
    // //         arr[a]-=1;
    // //         if(arr[a]==0){
    // //             break;
    // //         }
    // //         // if(arr[a]<0){
    // //         //     cout<<"Mike"<<endl;
    // //         //     return;
    // //         // }
    // //     }
    // // }

    // int diff = arr[1] - arr[0];

    // if(joe==1){
    //     cout<<"Joe"<<endl;
    // }
    // else{
    //     cout<<"Mike"<<endl;
    // }
    
}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}