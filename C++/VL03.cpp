#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i=2; i<=n; i++){
        sum += i;
    }
    cout << sum + 2*n << endl;
    return 0;
}