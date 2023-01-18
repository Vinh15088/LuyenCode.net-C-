#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a11,a12,a13,a21,a22,a23,a31,a32,a33;
    cin >> a11 >> a12 >> a13;
    cin >> a21 >> a22 >> a23;
    cin >> a31 >> a32 >> a33;
    ll s1 = a11*a22*a33+a31*a12*a23+a13*a32*a21;
    ll s2 = a13*a22*a31+a33*a21*a12+a11*a32*a23;
    cout << s1-s2 << endl;
    return 0;
}

// 17:54
// 15/01/2023
// Made by VinhSeo