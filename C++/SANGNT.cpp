#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve(){
    for(int i=0; i<=1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2; i<=1000; i++){
        if(prime[i]){
            for(int j=i*i; j<=1000000; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    int n; cin >> n;
    sieve();
    for(int i=0; i<=n; i++){
        if(prime[i]==1) cout << i << " ";
    }
    return 0;
}