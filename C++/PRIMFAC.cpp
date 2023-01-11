#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    map<long long, long long> m; 
    // map<long long, long long>::iterator it;
    for(long long i=2; i<=n; i++){
        while(n%i==0){
            m[i]++;
            n /= i;
        }
    }
    cout << m.size() << endl;
    for(auto it:m){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}