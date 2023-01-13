#include<bits/stdc++.h>
using namespace std;

int check(int n){
    string s = to_string(n);
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='5') count++; 
    }
    return count;
}
int main(){
    int m,n; cin >> m >> n;
    long long count = 0;
    for(int i=m; i<=n; i++){
        count += check(i);
    }
    cout << count << endl;
    return 0;
}