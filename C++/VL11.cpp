#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    if(n<2) return false;
    for(long long i=2; i<=sqrt(n); i++){
       if(n%i==0) return false;
    }
    return true;
}
int main(){
    long long n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}


// cach 2 
#include<bits/stdc++.h> 
using namespace std;

bool check(long long n){
	if(n<2) return false;
    if(n==2 || n==7) return true;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0) return false;
    return true;
}

int main(){
    long long n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}