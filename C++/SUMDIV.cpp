#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = 0;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                int j = n/i;
                if(i==j) sum += i;
                else sum = sum+i+j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}