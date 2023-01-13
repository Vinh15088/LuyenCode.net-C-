#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        string ans[1001];
        int count = 0;
        stringstream ss(s);
        while(ss >> ans[count]) count++;
        if(count > 0) {
            for(int i=0; i<count-1; i++) cout << ans[i] << " ";
            cout << ans[count-1];
        }
        cout << endl;
    }
    return 0;
}

// 16:41
// 13/01/2023
// Made by VinhSeo