#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,m; cin >> n;
    int n1 = int (n);
    m = n-n1;
    if(n>=0){
        (m>=0.5) ? cout << n1+1 : cout << n1;
    }
    else {
        (abs(m) >= 0.5) ? cout << n1-1 : cout << n1;
    }
    return 0;
}