#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int a=n;
    if(n%2==0){
        while(n%2==0) n/=2;
    }
    else{
        for(int i=3; i<=sqrt(n); i+=2){
            if(n%i==0){
                n/=i;
                break;
            }
        }
    }
    if(n==a) return 1;
    else return n;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

// 16:22
// 13/01/2023
// Made by VinhSeo