#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    a = abs(a);
    int count = 1;
    for(int i=1; i<a; i++){
        if(a%i==0) count++;
    }   
    cout << count << endl;
    return 0;
}