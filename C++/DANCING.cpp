#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long Sao = 4*n - 4;
    long long Cong = 0;
    for(long long i=1; i<=(n-2)*2; i+=2){
        Cong += i;
    }
    cout << Sao << " " << Cong << endl;
    return 0;
}

// 21:32
// 13/01/2023
// Made by VinhSeo