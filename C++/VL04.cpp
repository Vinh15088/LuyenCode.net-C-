#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    float sum = 0;
    for(int i=2; i<=n; i++){
        sum += (float) 1/i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}