#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int Hour, Minute, Second;
    Hour = n/3600;
    Minute = (n%3600)/60;
    Second = ((n%3600)%60);
    if(Hour > 9) cout << Hour << ':';
    else cout << "0" << Hour << ':';
    if(Minute > 9) cout << Minute << ':';
    else cout << "0" << Minute << ':';
    if(Second > 9) cout << Second;
    else cout << "0" << Second;
    return 0;
}