#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    if(sum%10 == 0) return true;
    else return false;
}

bool checkdx(int n){
    int m = n;
    int dao = 0;
    while(m>0){
        dao = dao*10 + m%10;
        m /= 10;
    }
    if(dao == n) return true;
    else return false;
}

int main(){
    int l,r;
    while(cin >> l >> r){
         
        int count = 0;
        for(int i=l; i<=r; i++){
            if(check(i) && checkdx(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}

// 22:08
// 12/01/2023
// Made by VinhSeo