#include<bits/stdc++.h>
using namespace std;

int main(){
    long long sum = 0;
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        sum += pow(i,3);
    }
    cout << sum << endl;
    return 0;
}

// 21:20
// 13/01/2023
// Made by VinhSeo