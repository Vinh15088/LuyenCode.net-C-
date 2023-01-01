#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    while(cin >> n){
        if(n>=0) break;
        else {
            cout << n << " ";
            count++;
        }
    }
    if(count==0) cout << "NOT FOUND";
    return 0;
}