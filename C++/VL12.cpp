#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n<0) n=-n;
    if(n==0) cout << "INF";
    else {
		for(int i=n; i>=1; i--){
        if(n%i==0) cout << i << " ";
    	}
    }
    return 0;
}