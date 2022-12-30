#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    if(n==0) cout << "YES";
    else {
        if(n == (long long) sqrt(n) * sqrt(n)) cout << "YES";
        else cout << "NO";
    }
    return 0;
}