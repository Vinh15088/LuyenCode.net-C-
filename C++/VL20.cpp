#include<bits/stdc++.h>
using namespace std;

int main(){
    char a,b; cin >> a >> b;
    int ia = (int) a; 
    int ib = (int) b;
    for(int i= ia-32; i<= ib-32; i++){
        cout << static_cast<char>(i) << " ";
    }
}