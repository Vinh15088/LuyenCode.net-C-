#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int Cvi = a+b+c;
    double p = (double) Cvi/2;
    double DTich = sqrt(p*(p-a)*(p-b)*(p-c));
    if(a+c > b && a+b > c && b+c > a){  
        cout << Cvi << " " << fixed << setprecision(2) << DTich;
    }
    else cout << "NO";
    return 0;
}