#include<bits/stdc++.h>
using namespace std;

int main(){
    double x, sum = 0; int n; 
    cin >> x >> n; 
    for(int i=1; i<=n; i++){
        int gt = 1;
        gt *= i;
        sum += pow(x,i)/gt;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}