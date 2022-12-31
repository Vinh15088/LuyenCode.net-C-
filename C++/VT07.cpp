#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[11];
    for(int i=1; i<=11; i++){
        cin >> a[i];
    }
    int result = a[11];
    int count = 0;
    for(int i=1; i<=10; i++){
        if(a[i] == result){
            cout << i << " ";
            count++;
        }
    }
    if(count==0) cout << "-1";
    return 0;
}