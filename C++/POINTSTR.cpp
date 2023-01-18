#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    string check = "luyencode";
    int count = 0;
    while(1){
        int index = s.find(check);
        if(index != string::npos){   // npos : khong tim thay
            ++count;
            s[index] = '!';
        }
        else break;
    }
    cout << count << endl;
    return 0;
}

// 11:28
// 18/01/2023
// Made by VinhSeo