#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,a,b; cin >> n >> a >> b;
    if(n%a==0 && n%b==0) cout << "Co, tat ca!";
    else if(n%a==0 && n%b!=0) cout << "Chi chia het cho " << a << ",";
    else if(n%a!=0 && n%b==0) cout << "Chi chia het cho " << b << ".";
    else cout << "Khong chia het cho so nao ca.";
    return 0;
}

// 12:00
// 18/01/2023
// Made by VinhSeo