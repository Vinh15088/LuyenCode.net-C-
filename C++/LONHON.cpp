#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    if(a>b) cout << 0 << endl;
    else{
        int i=0;
        while(1){
            a *= 3;
            b *= 2;
            i++;
            if(a > b) break;
        }
        cout << i << endl;
    }
    return 0;
}

// 11:07
// 14/01/2023
// Made by VinhSeo