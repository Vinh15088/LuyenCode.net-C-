#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, id, sum = 0;
    cin >> n; 
    for(int i=1; i<n; i++){
        sum += i;
        if(sum > n){
            id = i-1;
            break;
        }
    }
    cout << id << endl;
    return 0;
}