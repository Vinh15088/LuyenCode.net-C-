#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a[110],n;
    a[0] = a[1] = 0;
    a[2] = 1;
    for(int i=3; i<=109; i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    while(cin >> n){    
        if(n==0) cout << 0 << endl;
        else{
            for(int i=3; i<=109; i++){
                if(a[i] >= n){
                    cout << a[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

// 22:51
// 14/01/2023
// Made by VinhSeo