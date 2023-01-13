#include<bits/stdc++.h>
using namespace std;

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool check(int n){
    if(n%400==0 || (n%4==0 && n%100!=0)) return true;
    else return false;
}
int main(){
    int n, y; cin >> n >> y;
    if(check(y)) month[2]++;
    int i=1; 
    while(n>month[i]){
        n -= month[i];
        i++;
    }
    cout << n << " " << i << endl;
    return 0;
}

// 09:29
// 13/01/2023
// Made by VinhSeo